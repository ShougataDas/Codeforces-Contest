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

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void solve(int cx)
{
    int n, k;
    cin >> n >> k;
    int tem = n;
    int sum = 0;
    while (tem)
    {
        sum += (tem % 3);
        tem /= 3;
    }
    int mn = min(n, k);
    if (n % 2 != mn % 2)
        mn--;
    if (mn < 0)
    {
        minus;
        return;
    }
    if (sum > mn)
    {
        minus;
        return;
    }
    int m = (n - mn) / 2;
    int ans = 3 * n;
    int x = 0;
    while (m && n >= 3)
    {
        int div = n / 3;
        int c = min(div, m) * binpow(3LL, x);
        ans += c;
        n = min(div, m);
        m -= min(div, m);
        x++;
    }
    cout << ans << endl;
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