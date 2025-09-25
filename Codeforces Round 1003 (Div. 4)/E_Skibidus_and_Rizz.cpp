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
    int n, m, k;
    cin >> n >> m >> k;
    if (max(n, m) - min(n, m) > k)
    {
        minus;
        return;
    }
    if(max(n,m) < k)
    {
        minus;
        return;
    }
    char c1, c2;
    string ans;
    if (n > m)
    {
        c1 = '0';
        c2 = '1';
    }
    else
    {
        c1 = '1';
        c2 = '0';
        swap(n,m);
    }
    int f = 0;
    int tar = n + m;
    while ((int)ans.size() < tar)
    {
        if (n == 0 && m == 0)
            break;
        if (n == 0 && f == 0 && (int)ans.size() < tar)
        {
            minus;
            return;
        }
        if (m == 0 && f == 1 && (int)ans.size() < tar)
        {
            minus;
            return;
        }
        if (!f && n > 0)
        {
            for (int i = 0; i < k && n > 0; i++)
            {
                ans.push_back(c1);
                n--;
            }
            f = 1;
        }
        else if (f && m > 0)
        {
            for (int i = 0; i < k && m > 0; i++)
            {
                ans.push_back(c2);
                m--;
            }
            f = 0;
        }
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