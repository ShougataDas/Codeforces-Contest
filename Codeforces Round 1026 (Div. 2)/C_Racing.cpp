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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pii> obs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> obs[i].first >> obs[i].second;
    }
    vector<pii> dp(n, {0, 0});

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (a[i] > -1)
            {
                dp[i].first += a[i];
                dp[i].second += a[i];
            }
            else
            {
                dp[i].second++;
            }
            dp[i].first = max(dp[i].first, obs[i].first);
            dp[i].second = min(dp[i].second, obs[i].second);
            continue;
        }
        if (a[i] > -1)
        {
            dp[i].first = dp[i - 1].first + a[i];
            dp[i].second = dp[i - 1].second + a[i];
        }
        else
        {
            dp[i].first = dp[i - 1].first;
            dp[i].second = dp[i - 1].second + 1;
        }
        dp[i].first = max(dp[i].first, obs[i].first);
        dp[i].second = min(dp[i].second, obs[i].second);
    }

    dbg(dp);
    for (pii p : dp)
    {
        if (p.first > p.second)
        {
            minus;
            return;
        }
    }
    vector<int> ans(n);
    int jump = (dp[n - 1].first + dp[n - 1].second) / 2;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            if (jump == 0)
            {
                ans[i] = 0;
            }
            else
                ans[i] = 1;
            break;
        }
        if (a[i] > -1)
        {
            jump -= a[i];
            ans[i] = a[i];
        }
        else
        {
            if (dp[i - 1].first <= jump && dp[i - 1].second >= jump)
            {
                ans[i] = 0;
            }
            else
            {
                ans[i] = 1;
                jump--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
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
