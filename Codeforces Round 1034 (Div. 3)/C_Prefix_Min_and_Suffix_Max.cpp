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
    string s;
    vector<int> pre(n), suf(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = min(pre[i - 1], a[i]);
    }
    suf[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = max(suf[i + 1], a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (pre[i] == a[i] || suf[i] == a[i])
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
    }
    cout << s << "\n";
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