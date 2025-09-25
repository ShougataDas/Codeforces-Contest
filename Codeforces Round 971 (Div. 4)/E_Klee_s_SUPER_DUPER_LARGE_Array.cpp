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
    int sum = ((2 * k * n) + (n * n - n)) / 2;
    int l = 0, r = n;
    int ans;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int sum1 = ((2 * k * mid) + (mid * mid - mid)) / 2;
        int b = sum - sum1;
        if (b < sum1)
        {
            ans = sum1;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    int b = sum - ans;
    int a = ans;

    int dif = abs(a - b);
    l = 0, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int sum1 = ((2 * k * mid) + (mid * mid - mid)) / 2;
        int b = sum - sum1;
        if (b < sum1)
        {
            r = mid - 1;
        }
        else
        {
            ans = sum1;
            l = mid + 1;
        }
    }
    b = sum - ans;
    a = ans;
    dif = min(dif, abs(a - b));
    cout << dif << "\n";
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