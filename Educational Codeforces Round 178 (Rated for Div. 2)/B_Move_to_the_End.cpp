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
        cin >> a[i];
    vector<int> pre_max(n + 1, 0);
    pre_max[0] = a[0];
    for (int i = 0; i < n; i++)
    {
        pre_max[i + 1] = max(pre_max[i], a[i]);
    }

    int cur_sum = 0;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cur_sum += a[n - i - 1];
        ans[i] = max(cur_sum, cur_sum - a[n - i - 1] + pre_max[n - i - 1]);
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