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
    ll a[n + 5], sum[n + 5];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            sum[i] = a[i];
        else
            sum[i] = a[i] + sum[i - 1];
    }
    if (n == 1)
    {
        cout << 0 <<"\n";
        return;
    }
    ll m = (ll)-1e16;
    for (ll i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            ll x = (ll)-1e16, y = (ll)1e16;
            for (ll j = i - 1; j < n; j += i)
            {
                if (j == i - 1)
                {
                    if (sum[j] > x)
                        x = sum[j];
                    if (sum[j] < y)
                        y = sum[j];
                }
                else
                {
                    if (sum[j] - sum[j - i] > x)
                        x = sum[j] - sum[j - i];
                    if (sum[j] - sum[j - i] < y)
                        y = sum[j] - sum[j - i];
                }
            }
            m = max(m, abs(x - y));
        }
    }
    cout<<m<<"\n";
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