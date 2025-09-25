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
    int ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        int g = __gcd(a[i],a[i+1]);
        int l1 = a[i] / g;
        int l2 = a[i + 1] / g;
        if(l1 == 1 && l2 == 1)
            continue;
        if(!ans)
            ans = l1;
        else
            ans = __gcd(ans, l1);
        if(!ans)
            ans = l2;
        else
            ans = __gcd(ans, l2); 

    }
    if(ans == 0)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << ans << "\n";
    }
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