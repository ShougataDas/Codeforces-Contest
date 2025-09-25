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
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int mx = -1;
    // int r = -1, c = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
        }
    }

    vector<pii> pos;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == mx)
            {
                pos.push_back({i, j});
            }
        }
    }
    set<int> c;
    for (auto p : pos)
    {
        c.insert(p.second);
    }

    set<int> r;
    for (int x : c)
    {
        for (auto p : pos)
        {
            if (p.second == x)
            {
                r.insert(p.first);
                break;
            }
        }
    }
    if (r.size() <= 2)
        mx--;
    cout << mx << "\n";
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