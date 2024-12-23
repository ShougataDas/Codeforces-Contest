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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int sum = a + b + c;
    if (n % sum == 0)
    {
        cout << (n / sum) * 3 << "\n";
        return;
    }
    int rem = n % sum;
    if (rem <= a)
    {
        cout << (n / sum) * 3 + 1 << "\n";
        return;
    }
    rem -= a;
    if (rem <= b)
    {
        cout << (n / sum) * 3 + 2 << "\n";
    }
    else
        cout << (n / sum) * 3 + 3 << "\n";
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