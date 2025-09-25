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

pii cal(int l, int r, int k)
{
    int seg = (r - l + 1);
    if (seg < k)
    {
        return {0, 0};
    }

    int mid = (l + r) / 2;
    // if (dp[{l, r}] != 0)
    //     return dp[{l, r}];
    if (seg % 2 == 0)
    {
        pii cur = cal(l, mid, k);
        pii ans;
        ans.first = (2 * cur.first) + (mid * cur.second);
        ans.second = 2 * cur.second;
        return ans;
    }
    else
    {
        pii cur = cal(l, mid - 1, k);
        pii ans;
        ans.first = mid + (2 * cur.first) + (mid * cur.second);
        ans.second = 2 * cur.second + 1;
        return ans;
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    // dp.clear();
    cout << cal(1, n, k).first << "\n";
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