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
const int mod = 998244353;
const double PI = acos(-1);
const double eps = 1e-9;

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        res %= mod;
        a = a * a;
        a %= mod;
        b >>= 1;
    }
    return res;
}
inline int add(int x, int y)
{
    return (x + y >= mod ? x + y - mod : x + y);
}

inline int sub(int x, int y)
{
    return (x - y < 0 ? x - y + mod : x - y);
}

inline int gun(int x, int y)
{
    return ((x * 1ll * y) % mod);
}

inline int vag(int x, int y)
{
    return (x * 1ll * binpow(y, mod - 2)) % mod;
}
int f(int n, vector<vector<int>> &dp, vector<int> &a, vector<int> &b, int i, int prev)
{
    if (i == n)
        return 1;
    if (dp[i][prev] != -1)
        return dp[i][prev];

    int mn1 = (prev == 0 ? min(a[i - 1], b[i - 1]) : max(a[i - 1], b[i - 1]));
    int mx1 = (prev == 0 ? max(a[i - 1], b[i - 1]) : min(a[i - 1], b[i - 1]));
    int ans = 0;
    int mn = min(a[i], b[i]);
    int mx = max(a[i], b[i]);
    if (mn1 <= mn && mx1 <= mx)
        ans = add(ans, f(n, dp, a, b, i + 1, 0));
    if (mn1 <= mx && mx1 <= mn)
        ans = add(ans, f(n, dp, a, b, i + 1, 1));
    return dp[i][prev] = ans;
}

void solve(int cx)
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<vector<int>> dp(n, vector<int>(2, -1));
    int ans = add(f(n, dp, a, b, 1, 0), f(n, dp, a, b, 1, 1));
    cout << ans << endl;
}

int tc = 1;

int32_t main()
{
    fastread();
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
