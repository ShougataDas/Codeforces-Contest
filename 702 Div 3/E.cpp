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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a[i] = {x, i};
    }
    sort(a.begin(), a.end());
    vector<ll> pre_sum(n + 1);
    pre_sum[0] = 0;
    for (int i = 1; i <= n; i++)
        pre_sum[i] = a[i].first + pre_sum[i - 1];
    ll idx = 1;
    ll l = 1;
    while (idx < n)
    {
        if (pre_sum[idx] < a[idx + 1].first)
        {
            l = idx + 1;
        }
        idx++;
    }
    vector<ll> ans;
    for (ll i = l; i <= n; i++)
        ans.push_back(a[i].second);
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (auto val : ans)
        cout << val << " ";
    cout << "\n";
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