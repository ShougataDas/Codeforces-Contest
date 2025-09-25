#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define dbg(...)
#endif
#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(7);            \
    cout.setf(ios::fixed, ios::floatfield);
using namespace std;
const int mod = 1e9 + 7;
const double PI = acos(-1);
const double eps = 1e-9;

void solve(int cx)
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> diff(n);
    int e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i & 1)
            o += a[i];
        else
            e += a[i];
        diff[i] = e - o;
    }
    int ans = 0;
    int mx = -1;
    int cur = 0, prv = 0;
    for (int i = 0; i < n; i++)
    {
        cur += diff[i];
        int tem = cur + diff[i];
        if (i == 0)
        {
            mx = max(mx, prv);
            prv = tem;
            continue;
        }
        if (mx > tem)
        {
            ans += mx - tem;
            if (i & 1)
            {
                diff[i - 1] += mx - tem;
                cur += mx - tem;
            }
            else
            {
                diff[i] += mx - tem;
                cur += mx - tem;
            }
            tem += mx - tem;
        }
        mx = max(mx, prv);
        prv = tem;
    }
    cout << ans << "\n";
}
int tc = 1;

int32_t main()
{
    fastread();
    // fraction();
    if (tc)
    {
        int t;
        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            solve(i);
        }
    }
    else
    {
        solve(0);
    }

    return 0;
}