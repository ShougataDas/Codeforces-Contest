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
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int profit = 0;
    int buys = n, neg_rating = 0;
    map<int, int> neg_rat;
    map<int, int> buy_dec;
    for (int i = 0; i < n; i++)
    {
        neg_rat[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        neg_rat[b[i]]--;
        buy_dec[b[i]]--;
    }

    for (auto [price, rating] : neg_rat)
    {
        if (neg_rating <= k)
            profit = max(profit, buys * price);
        buys += buy_dec[price];
        neg_rating += rating;
    }
    cout << profit << "\n";
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