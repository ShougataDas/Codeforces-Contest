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
    string s;
    cin >> s;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    //    int sz = s.size();
    int r = 0, c = 0;
    for (char ch : s)
    {
        if (ch == 'D')
        {
            int sum1 = 0;
            for (int i = 0; i < m; i++)
            {
                sum1 += a[r][i];
            }
            a[r][c] = -sum1;
            r++;
        }
        else
        {
            int sum1 = 0;
            for (int i = 0; i < n; i++)
            {
                sum1 += a[i][c];
            }
            a[r][c] = -sum1;
            c++;
        }
    }

    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += a[i][m - 1];
    }
    a[n - 1][m - 1] = -sum1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
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