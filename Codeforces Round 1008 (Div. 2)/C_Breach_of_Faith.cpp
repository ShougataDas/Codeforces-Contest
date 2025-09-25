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
    n *= 2;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a.begin(), a.end(), greater<int>());
    int x = 0;
    for (int i = 0; i < n; i += 2)
    {
        x += a[i] - a[i + 1];
    }
    if (mp[x] == 0)
    {
        cout << x << " ";
        for (int i : a)
            cout << i << " ";
        cout << "\n";
        return;
    }
    sort(a.begin(), a.end());
    int d = a[n - 1];
    int diff = 0;
    int l = 0, r = n - 2;
    while (l < r)
    {
        diff += a[l] - a[r];
        l++;
        r--;
    }
    x = d + abs(diff) + a[l];
    cout << d << " ";
    l = 0, r = n - 2;
    while (l < r)
    {
        cout << a[l] << " " << a[r] << " ";
        l++;
        r--;
    }
    cout << x << " " << a[l] << "\n";
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