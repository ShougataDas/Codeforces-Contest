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
    set<pii> y0;
    set<pii> y1;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (y == 0)
        {
            y0.insert({x, y});
        }
        else
            y1.insert({x, y});
    }
    int ans = 0;
    for (pii x : y1)
    {
        if (y0.find({x.first, 0}) != y0.end())
            ans += (int)y0.size() - 1;

        auto it = y0.find({x.first - 1, 0});
        auto it1 = y0.find({x.first + 1, 0});
        if (it != y0.end() && it1 != y0.end())
            ans++;
    }
    for (pii x : y0)
    {
        if (y1.find({x.first, 1}) != y1.end())
            ans += (int)y1.size() - 1;

        auto it = y1.find({x.first - 1, 1});
        auto it1 = y1.find({x.first + 1, 1});
        if (it != y1.end() && it1 != y1.end())
            ans++;
    }
    cout << ans << "\n";
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