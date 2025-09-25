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
    vector<int> b(n - 2);
    for (int i = 0; i < n - 2; i++)
    {
        cin >> b[i];
    }
    int f = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if(i+2 < n-2)
        {
            if(b[i] == 1 && b[i+1] == 0 && b[i+2] == 1)
            {
                no;
                return;
            }
            
        }
    }
    yes;
   
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