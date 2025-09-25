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
    vector<int> a(4);

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int mx = -1;
    int val = -1;
    for (int i = -1000; i <= 1000; i++)
    {
        int count = 0;
        if (a[0] + a[1] == i)
            count++;
        if (a[1] + i == a[2])
            count++;
        if (i + a[2] == a[3])
            count++;
        if(mx < count)
        {
            mx = count;
            val = i;
        }
    }
    cout << mx  <<"\n";
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