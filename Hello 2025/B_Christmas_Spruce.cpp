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

    vector<vector<int>> adj(n + 1);

    for (int i = 1; i <= n - 1; i++)
    {
        int p;
        cin >> p;
        adj[p].push_back(i + 1);
    }

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        int f = 0;
        for (int j = 0; j < adj[i].size(); j++)
        {
            int cur = adj[i][j];
            // cout << cur <<"= ";
            // cout << adj[cur].size() <<"\n";
            f = 1;
            if (adj[cur].size() == 0)
                count++;
        }
        // cout << count << "\n";
        if (f && count < 3)
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int32_t main()
{
    fastread();
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}