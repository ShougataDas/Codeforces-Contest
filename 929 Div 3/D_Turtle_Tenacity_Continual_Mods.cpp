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
    vector<ll>a(n);
    map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    if (mp.begin()->second == 1)
    {
        cout << "YES" << endl;
        return;
    }
    vector<ll> v;
    for (auto x : mp)
    {
        v.push_back(x.first);
    }
        if (v.size() == 1)
        {
            cout << "NO" << endl;
            return;
        }
        bool flag = true;
        for (ll i = 1; i < v.size(); i++)
        {
            if (v[i] % v[0] != 0)
            {
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
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