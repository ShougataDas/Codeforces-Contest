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

void solve(int cx)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            z++;
    }
    int ans = 0;
    for (int i = 0; i < z; i++)
    {
        if (s[i] == '1')
            ans++;
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