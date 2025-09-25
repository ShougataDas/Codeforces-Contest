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
    int l, r;
    cin >> l >> r;

    vector<int> l1(31, 0), r1(31, 0);

    for (int i = 0; i <= 30; i++)
    {
        if (l & (1 << i))
        {
            l1[i] = 1;
        }
        if (r & (1 << i))
        {
            r1[i] = 1;
        }
    }

    int bit = 0;

    for (int i = 30; i >= 0; i--)
    {
        if (l1[i] != r1[i])
        {

            bit = i;
            break;
        }
    }

    int a = l | ((1 << bit) -1);
    int b = a + 1;
    int c = (a == l ? r : l);

    cout << a << " " << b << " " << c << "\n";
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