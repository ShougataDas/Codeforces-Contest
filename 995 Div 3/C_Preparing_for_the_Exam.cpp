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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    set<int> s;
    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;
        s.insert(q);
    }
    string ans = "";
    int sz = s.size();
    for (int i = 0; i < m; i++)
    {
        if(sz == n-1)
        {
            if(s.find(a[i]) == s.end())
                ans+='1';
            else
                ans+='0';
        }
        else if(k == n)
            ans+='1';
        else
            ans+='0';
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