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
    set<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.insert(x);
    }

    int sz1 = a.size();
    int sz2 = b.size();
    if (sz1 >= 3 || sz2 >= 3)
        yes;
    else if (sz1 == 2 && sz2 == 2 && n >= 4)
    {
        yes;
    }
    else
        no;
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