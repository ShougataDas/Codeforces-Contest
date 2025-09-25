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
const int mod = 998244353;
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> dp(n + 1, 0);
    if (a[1] == 0)
        dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        // if honest
        if (a[i] == a[i - 1])
        {
            dp[i] += dp[i - 1];
        }
        else if (a[i] == a[i - 2] + 1)
        {
            dp[i] += dp[i - 2];
        }
        dp[i] %= mod;
    }

    cout << dp[n] + dp[n - 1] << "\n";
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