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
    int l = 0, r = 0;
    for (int i = 1; i <= n; i++)
    {
        char op1, op2;
        int x, y;
        cin >> op1 >> x >> op2 >> y;
        if (i == 1)
        {
            if (op1 == '+')
                l += x + 1;
            else
                l += x;

            if (op2 == '+')
                l += y + 1;
            else
                r += y;

            continue;
        }

        int sum = l + r;
        int l1, r1;

        if (op1 == '+' && op2 == '+')
        {
            int total = sum + x + y;
            l1 = total / 2;
            r1 = total - l1;
        }
        else if (op1 == '+' && op2 == 'x')
        {
            l1 = 1 + x;
            r1 = (sum - 1) * y;
        }
        else if (op1 == 'x' && op2 == '+')
        {
            l1 = (sum - 1) * x;
            r1 = 1 + y;
        }
        else
        {
            int total1 = (sum - 1) * x + y;
            int total2 = x + (sum - 1) * y;
            if (total1 >= total2)
            {
                l1 = (sum - 1) * x;
                r1 = y;
            }
            else
            {
                l1 = x;
                r1 = (sum - 1) * y;
            }
        }

        l = l1;
        r = r1;
    }
    cout << l + r << "\n";
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
