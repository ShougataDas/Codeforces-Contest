#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define dbg(...)
#endif
#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum <= x)
    {
        cout << 0 << "\n";
        return;
    }
    sort(a, a + n);
    int lo = sum - y;
    int hi = sum - x;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int lo1 = lo - a[i];
        int hi1 = hi - a[i];
        ans += upper_bound(a + i + 1, a + n, hi1) - lower_bound(a + i + 1, a + n, lo1);
    }
    cout << ans << "\n";
}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}