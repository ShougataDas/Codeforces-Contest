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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    l--, r--;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> tem1 = a;
    reverse(tem1.begin(), tem1.begin() + r);
    int count1 = 0;
    for (int i = l; i <= r; i++)
    {
        count1 += tem1[i];
    }
    tem1 = a;
    reverse(tem1.begin() + l, tem1.end());
    int count2 = 0;
    for (int i = l; i <= r; i++)
    {
        count2 += tem1[i];
    }
    cout << min(count1, count2) << "\n";
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