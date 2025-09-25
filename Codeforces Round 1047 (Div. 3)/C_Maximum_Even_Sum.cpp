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
    int a, b;
    cin >> a >> b;
    int ans = -1;
    int cnt = 0;
    for (int i = 1; i * i <= b; i++)
    {
        if (b % i == 0)
        {
            int d1 = i;
            int d2 = b / i;
            int ans1 = (a * d1) + d2;
            int ans2 = (a * d2) + d1;
            int cand = -1;
            if (ans1 % 2 == 0)
                cand = max(cand, ans1);
            if (ans2 % 2 == 0)
                cand = max(cand, ans2);
            if (cand == ans2)
            {
                ans = max(ans, cand);
                break;
            }
            if(cand != -1)
                ans = max(ans, cand);
        }
        cnt++;
        if (cnt > 10000)
            break;
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