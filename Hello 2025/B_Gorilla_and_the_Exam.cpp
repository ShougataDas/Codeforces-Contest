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
    int n, k;
    cin >> n >> k;
    int a[n];
    map<int, int> mp;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        s.insert(a[i]);
    }

    vector<pii> v;
    for (auto [num, count] : mp)
    {
        v.push_back({count, num});
    }

    sort(v.begin(), v.end());

    for (auto p : v)
    {
        if (p.first <= k)
        {
            s.erase(p.second);
            k -= p.first;
        }
    }

    cout << max(1LL,(int)s.size()) << "\n";
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