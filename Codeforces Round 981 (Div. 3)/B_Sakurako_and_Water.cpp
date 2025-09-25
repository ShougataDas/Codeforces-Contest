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
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j])
                continue;

            int mx = -1;
            for (int k = 1; k < n; k++)
            {
                if (i + k >= n || j + k >= n)
                    break;

                if (a[i + k][j + k] < 0)
                {
                    mx = max(mx, abs(a[i + k][j + k]));
                }
                vis[i + k][j + k] = true;
            }
            if (a[i][j] < 0)
                mx = max(mx, abs(a[i][j]));
            else
                mx = max(mx, 0LL);
            ans += mx;
        }
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