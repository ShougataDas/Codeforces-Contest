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
    int a[n];
    vector<int> z;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != 0)
            z.push_back(i);
    }
    if(z.size() == 0)
    {
        cout << 0 <<"\n";
        return;
    }
    //int cnt = 1;
    for (int i = 1; i < z.size(); i++)
    {
        if (z[i] - 1 != z[i - 1])
        {
            cout << 2 <<"\n";
            return;
        }
    }
    cout << 1 << "\n";
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