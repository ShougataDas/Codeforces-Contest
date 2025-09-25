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
void dfs(vector<set<int>> &adj, vector<bool> &visited, int start)
{
    visited[start] = true;
    for (int child : adj[start])
    {
        if (!visited[child])
        {
            dfs(adj, visited, child);
        }
    }
}
void dfs1(vector<set<int>> &adj, int parent, int start, vector<int> &level)
{

    for (int child : adj[start])
    {
        if (child != parent)
        {
            level[child] = level[start] + 1;
            dfs1(adj, start, child, level);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<set<int>> adj(n + 1, set<int>());
    map<int,int>mp;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
        mp[u]++;
        mp[v]++;
    }

    int root = -1;
    int deg = -1;
    for (int i = 1; i <= n; i++)
    {
        if(mp[i] > deg)
        {
            deg = mp[i];
            root = i;
        }
    }

    vector<pii> nodes(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int sz = adj[i].size();
        nodes[i] = {sz, i};
    }

    sort(nodes.begin(), nodes.end());
    vector<int> level(n + 1);
    level[root] = 0;
    dfs1(adj, -1, root, level);
    int mark1 = -1, mark2 = -1;

    dbg(nodes);
    int count = 0;
    vector<int> cont;
    for (int i = n; i >= 2; i--)
    {
        if (count >= 2)
            break;
        if (nodes[i].first > nodes[i - 1].first)
        {
            if (cont.size() >= 2)
                break;
            if (mark1 == -1)
                mark1 = nodes[i].second;
            else if (mark2 == -1)
                mark2 = nodes[i].second;
            count++;
        }
        else if (nodes[i].first == nodes[i - 1].first)
        {
            cont.push_back(nodes[i].second);
            cont.push_back(nodes[i - 1].second);
        }
    }

    dbg(cont);
    vector<pii> li;

    for (int i : cont)
    {
        li.push_back({level[i], i});
    }

    sort(li.begin(), li.end());

    dbg(li);
    if (mark1 == -1)
    {
        mark1 = li[0].second;
        mark2 = li[1].second;
    }
    else if (mark2 == -1)
    {
        mark2 = li[0].second;
    }

    for (int i : adj[mark1])
    {
        adj[i].erase(mark1);
    }
    for (int i : adj[mark2])
    {
        adj[i].erase(mark2);
    }
    // dbg(mark1,mark2);
    adj[mark1].clear();
    adj[mark2].clear();

    vector<bool> visited(n + 1, false);
    int comp = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == mark1 || i == mark2)
        {
            continue;
        }
        if (!visited[i])
        {
            comp++;
            dfs(adj, visited, i);
        }
    }
    cout << comp << "\n";
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