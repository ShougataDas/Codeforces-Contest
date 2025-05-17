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
int log2(int u)
{
    int start = 1;
    int pow = 0;
    while(start < u)
    {
        start*=2;
        pow++;
    }
    return pow;
}

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int row_divide = log2(m) + min(log2(a), log2(n - a + 1));
    int col_divide = log2(n) + min(log2(b), log2(m - b + 1));
    cout << min(row_divide, col_divide) + 1 << "\n";
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