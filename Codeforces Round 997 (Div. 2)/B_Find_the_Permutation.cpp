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
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    deque<int> before, after;
    for (int i = 1; i < n; i++)
    {
        if (a[0][i] == '1')
        {
            if (after.empty())
            {
                after.push_back(i);
                continue;
            }
            deque<int> tem;
            int f = 0;
            for (int j : after)
            {
                if (a[i][j] == '0' && !f)
                {
                    tem.push_back(i);
                    tem.push_back(j);
                    f = 1;
                }
                else
                {
                    tem.push_back(j);
                }
                after.pop_front();
            }
            if(!f)
            {
                tem.push_back(i);
            }
            after = tem;
        }
        else
        {
            //dbg(i);
            if (before.empty())
            {
                before.push_back(i);
                continue;
            }
            deque<int> tem;
            int f = 0;
            for (int j : before)
            {
                if (a[i][j] == '0' && !f)
                {
                    //dbg(i,j);
                    tem.push_back(i);
                    tem.push_back(j);
                    f = 1;
                }
                else
                {
                    tem.push_back(j);
                }
                before.pop_front();
            }
            if(!f)
            {
                tem.push_back(i);
            }
            before = tem;
        }
    }
    for (int i : before)
        cout << i + 1 << " ";
    cout << "1 ";
    for (int i : after)
        cout << i + 1 << " ";
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