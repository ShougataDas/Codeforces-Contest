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
    int lob = (n * a[0]) - a[n - 1];
    int hor = (n * n) - 1;
    if (lob < 0 || (lob % hor) != 0)
    {
        no;
        return;
    }
    int part1 = lob / hor;
    int part2 = a[0] - (part1 * n);
    if (part2 < 0)
    {
        no;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        int num = (part2 * (i + 1)) + (part1 * (n - i));
        if (num != a[i])
        {
            no;
            return;
        }
    }
    yes;
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