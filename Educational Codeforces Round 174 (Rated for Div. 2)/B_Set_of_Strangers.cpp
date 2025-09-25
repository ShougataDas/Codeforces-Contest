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
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int color = n * m;
    vector<int> col(color + 1);
    vector<bool> vis(color + 1, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[a[i][j]])
            {
                vis[a[i][j]] = true;
                col[a[i][j]]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j + 1 < m && a[i][j + 1] == a[i][j])
                col[a[i][j]]++;
            if (i + 1 < n && a[i + 1][j] == a[i][j])
                col[a[i][j]]++;
        }
    }

    int tt = 0;
    int mx = -1;
    for (int i = 1; i <= color; i++)
    {
        if (vis[i])
        {
            tt += col[i];
            mx = max(mx, col[i]);
        }
    }

    cout << tt - mx << "\n";
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