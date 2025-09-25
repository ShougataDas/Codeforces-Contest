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
    int n, m;
    cin >> n >> m;
    vector<set<int>> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            a[i].insert(x);
            mp[x] = i;
        }
    }

    int start = 0, end = n * m - 1;
    int deck = -1;
    vector<int> move;
    int prv = -1;
    int f = 0;
    int count = 0;
    while(count < m)
    {
        vector<int>vis(n+1,0);
        int count2 = 0;
        if(count < 1)
        {
            while(count2 < n)
            {
                deck++;
                int khela = mp[deck];
                if(!vis[khela])
                {
                    move.push_back(khela+1);
                    a[khela].erase(deck);
                    vis[khela] = 1;
                }
                else
                {
                    f = 1;
                    break;
                }
                count2++;
            }

            // for(int i : move)
            // {
            //     cout << i << " ";
            // }
            // cout << "\n";

        }
        else
        {
            //deck++;
            for(int i : move)
            {
                int boro = *a[i-1].begin();
                if(boro > deck)
                {
                    a[i-1].erase(boro);
                    deck++;
                }
                else
                {
                    f = 1;
                    break;
                }
            }
        }
        if(f)
        {
            break;
        }
        count++;
    }
    if(f)
    {
        minus;
    }
    else
    {
        for(int i : move)
            cout << i << " ";
        cout << "\n";
    }

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