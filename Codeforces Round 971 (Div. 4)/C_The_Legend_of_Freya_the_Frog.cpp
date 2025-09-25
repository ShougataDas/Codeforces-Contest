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
    int x, y, k;
    cin >> x >> y >> k;
    int mv1 = x / k;
    if ((x % k))
        mv1++;

    int mv2 = y / k;
    if ((y % k))
        mv2++;
    // cout << mv1 <<" " << mv2 <<"\n";
    if (mv1 == mv2)
        cout << mv1 + mv2 << "\n";
    else if (mv1 < mv2)
    {
        cout << 2 * mv2 << "\n";
    }
    else
        cout << 2 * mv1 - 1 << "\n";
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