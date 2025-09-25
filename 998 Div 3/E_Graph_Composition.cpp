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
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    vector<set<int>> adj1(n + 1, set<int>());
    vector<set<int>> adj2(n + 1, set<int>());
    map<pii, int> mp;
    for (int i = 0; i < m1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj1[u].insert(v);
        adj1[v].insert(u);
        mp[{u, v}] = 0;
        mp[{v, u}] = 0;
    }
    for (int i = 0; i < m2; i++)
    {
        int u, v;
        cin >> u >> v;
        adj2[u].insert(v);
        adj2[v].insert(u);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j : adj2[i])
        {
            if (adj1[i].empty())
            {
                count++;
                adj1[i].insert(j);
                adj1[j].insert(i);
                continue;
            }
            if (adj1[i].find(j) == adj1[i].end())
            {
                count++;
                adj1[i].insert(j);
                adj1[j].insert(i);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        // dbg(adj1[i]);
        // dbg(adj2[i]);
        for (int j : adj1[i])
        {
            if (adj1[i].size() == 0)
                break;
            if (adj2[i].empty())
            {
                if(mp[{i, j}]) 
                    continue;
                // dbg(i,j);
                count++;
                mp[{i, j}] = 1;
                mp[{j, i}] = 1;
            }
            // dbg(i,j);
           // cout << i << " " << j << "\n";
            if (adj2[i].find(j) == adj2[i].end())
            {
                if (mp[{i, j}])
                    continue;
                // dbg(i,j);
                count++;
                mp[{i, j}] = 1;
                mp[{j, i}] = 1;
            }
        }
    }

    cout << count << "\n";
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