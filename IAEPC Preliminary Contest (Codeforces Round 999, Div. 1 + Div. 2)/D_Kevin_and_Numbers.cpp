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
    int n, m;
    cin >> n >> m;
    multiset<int> m1, m2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m1.insert(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        m2.insert(x);
    }
    // multiset<int> m3;
    int times = 2 * (n + m);
    while (times--)
    
    {
        if (m1.size() == 0 || m2.size() == 0)
            break;
        int num = *m2.rbegin();
        if (m1.find(num) != m1.end())
        {
            m2.erase(m2.find(num));
            m1.erase(m1.find(num));
            continue;
        }
        int num1 = num / 2;
        int num2 = (num / 2) + (num % 2);
        m2.erase(m2.find(num));
        m2.insert(num1);
        m2.insert(num2);
    }

    if (m1 == m2)
        cyes;
    else
        cno;
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