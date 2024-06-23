#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long
#define pii pair<ll , ll >
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null _type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll mod = 1e9 + 7;
void solve()
{
    ll  n;
    cin >> n;
    ll  a[n];
    for (ll  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool flag = false;
    for (ll  i = n - 2; i >= 0; i--)
    {
        if (a[i + 1] >= a[i])
            continue;
        if (a[i] < 10)
        {
            flag = true;
            break;
        }
        ll  l = a[i];
        ll  r = l % 10;
        l = l / 10;
        if (a[i + 1] >= r && l <= r)
        {
            a[i] = l;
        }
        else
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

ll main()
{
    fastread();
    ll  t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}