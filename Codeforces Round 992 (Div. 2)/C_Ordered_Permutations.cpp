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
void f(vector<int> &a, int i, int l, int r, int k)
{
    if (l == r)
    {
        a[l] = i;
        return;
    }
    int sz = (r - l - 1);
    if (sz < 60 && k > (1LL << sz))
    {
        a[r] = i;
        k -= (1LL << sz);
        f(a, i + 1, l, r - 1, k);
    }
    else
    {
        a[l] = i;
        f(a, i + 1, l + 1, r, k);
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    if ((n - 1) < 62 && k > (1LL << (n - 1)))
    {
        minus;
        return;
    }
    vector<int> a(n + 1);
    f(a, 1, 1, n, k);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
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