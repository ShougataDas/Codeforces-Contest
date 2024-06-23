#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9 + 7;

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
        int a[n + 1], b[m + 1];
        set<pair<int, int>> s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert({a[i], 0});
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            s.insert({b[i], 1});
        }
        int cnt = 0, c1 = 0, c2 = 0, ans = 0;
        for (auto i: s) {
            if (i.first > k)break;
            if (cnt != i.first) {
                ans++;
                if (i.second == 0)c1++;
                else c2++;
            } else {
                if (i.second == 0)c2--;
                else c1--;
            }
            cnt = i.first;
            if (ans != cnt)break;
        }
        if (ans == k) {
            if (c1 <= k / 2 && c2 <= k / 2)cout << "YES\n";
            else cout << "NO\n";
        } else cout<<"NO\n";
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}