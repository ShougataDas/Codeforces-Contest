#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define dbg(...)
#endif
#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(7);            \
    cout.setf(ios::fixed, ios::floatfield);
using namespace std;
const int mod = 1e9 + 7;
const double PI = acos(-1);
const double eps = 1e-9;

vector<int> f(int n, vector<vector<int>> &dp)
{
    if(n < 0)
      return {}; 
    if (n == 0)
    {
        return {0};
    }
    if (!dp[n].empty())
    {
        return dp[n];
    }

    int ex = 1;
    while (ex * 2 <= n)
    {
        ex *= 2;
    }

    int m = 2 * ex - n - 1;
    dbg(n,ex,m);
    vector<int> ans = f(m - 1, dp);
    dbg(ans);
    for (int i = m; i < ex; i++)
    {
        ans.push_back(2 * ex - i - 1);
    }
    dbg(ans);
    for (int i = ex; i <= n; i++)
    {
        ans.push_back(n + m - i);
    }

    return dp[n] = ans;
}

void solve(int cx)
{
    int l, r;
    cin >> l >> r;

    vector<vector<int>> dp(r + 1);
    vector<int> ans = f(r, dp);
    int sum = 0;
    for (int i = 0; i <= r; i++)
    {
        sum += (ans[i] | i);
    }

    cout << sum << endl;
    for (int i = 0; i <= r; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int tc = 1;

int32_t main()
{
    fastread();
    // fraction();
    if (tc)
    {
        int t;
        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            solve(i);
        }
    }
    else
    {
        solve(0);
    }

    return 0;
}