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
    vector<int> a(n);
    map<int, int> mp;
    // map<int,vector<int>>mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        mp[a[i]] = i;
    }

    vector<int> last(n+1, n), vis(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        if (vis[a[i]] == 0)
        {
            last[i] = n;
            vis[a[i]] = i;
        }
        else
        {
            last[i] = vis[a[i]];
            vis[a[i]] = i;
        }
    }

    int seg = 1;
    int ans = 0;
    int mn = n;
    // int last = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, mp[a[i]]);
        mx = max(mx, last[i]);
        //dbg(mn, i);
        if (mn > i  && i >= seg)
        {
            ans++;
            seg = mx;
            mn = n;
            mx = -1;
        }
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
