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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> even, odd;

    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
            odd.push_back(a[i]);
        else
            even.push_back(a[i]);
    }

    int sz1 = even.size();
    int sz2 = odd.size();

    int l1 = 0, l2 = 0;
    int ans = 0;
    int f = 0;
    int sum = 0;
    while (l1 < sz1 && l2 < sz2)
    {
        if (!f)
        {
            sum += even[l1];
            f = 1;
            l1++;
        }
        else
        {
            sum += odd[l2];
            f = 0;
            l2++;
        }
        int f1 = 0;
        while (sum % 2 == 0)
        {
            f1 = 1;
            sum /= 2;
        }
        if (f1)
            ans++;
        dbg(sum, ans);
    }

    while (l1 < sz1)
    {
        sum += even[l1];
        int f1 = 0;
        while (sum % 2 == 0)
        {
            f1 = 1;
            sum /= 2;
        }
        if (f1)
            ans++;
        l1++;
    }
    while (l2 < sz2)
    {
        sum += odd[l2];
        int f1 = 0;
        while (sum % 2 == 0)
        {
            f1 = 1;
            sum /= 2;
        }
        if (f1)
            ans++;
        l2++;
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