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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    l--, r--;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> left;
    for (int i = 0; i <= r; i++)
    {
        left.push_back(a[i]);
    }
    vector<int> right;
    for (int i = l; i < n; i++)
    {
        right.push_back(a[i]);
    }

    sort(left.begin(), left.end(), greater<int>());
    sort(right.begin(), right.end(), greater<int>());
    int sum1 = 0;
    int sum2 = 0;
    int count = (r-l+1);
    while (count--)
    {
        sum1 += left.back();
        left.pop_back();
        sum2 += right.back();
        right.pop_back();
    }

    cout << min(sum1, sum2) << "\n";
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