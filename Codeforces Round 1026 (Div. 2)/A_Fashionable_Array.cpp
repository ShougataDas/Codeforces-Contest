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
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] % 2;
    }
    int dis1 = 0;
    int dis2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            dis1 = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            dis2 = i;
            break;
        }
    }

    int ans1 = (n - 1 - dis2) + dis1;

    int dis3 = 0, dis4 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            dis3 = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            dis4 = i;
            break;
        }
    }
    int ans2 = (n - 1 - dis4) + dis3;

    cout << min(ans1, ans2) << "\n";
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