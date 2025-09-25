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
    int n, k;
    cin >> n >> k;
    vector<int> bits(32, 0);
    for (int i = 31; i >= 0; i--)
    {
        if (((n - 1) >> i) & 1)
            bits[i] = 1;
    }
    
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = 31; j >= 0; j--)
        {
            if ((i >> j) & 1)
            {
                if (bits[j] != 1)
                {
                    dbg(j);
                    f = 1;
                    break;
                }
            }
        }
        if (!f)
            ans[i] = k;
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
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