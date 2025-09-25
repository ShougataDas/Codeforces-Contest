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
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
void solve()
{
    int n, dig;
    cin >> n >> dig;
    set<int> ans;
    ans.insert(1);
    if (n >= 3)
    {
        ans.insert(3);
        ans.insert(7);
        if(n < 9)
        {
            int num = fact(n);
            num *= dig;
            if (num % 9 == 0)
                ans.insert(9);

        }
        else
            ans.insert(9);
    }
    else
    {
        int num = fact(n);
        num *= dig;
        if (num % 3 == 0)
            ans.insert(3);
        if (num % 9 == 0)
            ans.insert(9);
    }
    if (dig == 5)
        ans.insert(5);
    if(dig == 7)
        ans.insert(7);
    for (int i : ans)
        cout << i << " ";
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