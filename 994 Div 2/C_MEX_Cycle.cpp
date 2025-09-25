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
    int n, x, y;
    cin >> n >> x >> y;
    vector<vector<int>> friends(n + 1);
    friends[x].push_back(y);
    friends[y].push_back(x);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            friends[i].push_back(2);
            friends[i].push_back(n);
            continue;
        }
        if (i == n)
        {
            friends[i].push_back(1);
            friends[i].push_back(n - 1);
            continue;
        }
        friends[i].push_back(i - 1);
        friends[i].push_back(i + 1);
    }
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        set<int> s;
        for (int x : friends[i])
        {
            s.insert(ans[x - 1]);
        }
        int mex;
        for (int i = 0; i <= n; i++)
        {
            if (s.find(i) == s.end())
            {
                mex = i;
                break;
            }
        }
        ans[i - 1] = mex;
    }
    for (int i : ans)
        cout << i << " ";
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