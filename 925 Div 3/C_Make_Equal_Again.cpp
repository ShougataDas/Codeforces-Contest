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
    ll n, r = 1, l = 1;
    cin >> n;
    vector<ll>a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 0 <<"\n";
        return;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            r++;
        else
            break;
    }
    for (ll i = n - 1; i > 0; i--)
    {
        if (a[i] == a[i - 1])
            l++;
        else
            break;
    }
    if (a[0] == a[n - 1])
    {
        if (r == n)
            cout << 0 << "\n";
        else
        {
            cout << n - r - l << "\n";
        }
    }
    else
    {
        if (r > l)
            cout << n - r << "\n";
        else
            cout << n - l << "\n";
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