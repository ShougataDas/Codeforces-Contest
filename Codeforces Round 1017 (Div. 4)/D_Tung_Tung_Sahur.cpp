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
    string s, s1;
    cin >> s >> s1;
    if(s == s1)
    {
        yes;
        return;
    }
    if(s[0]!=s1[0])
    {
        no;
        return;
    }
    int n = s.size();
    int m = s1.size();
    char ch = s[0];
    int cnt = 1,cnt1 = 0;
    int aro = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != ch)
        {
            while(aro < m && s1[aro] == ch)
            {
                cnt1++;
                aro++;
            }
            if(cnt1 < cnt || cnt1 > (2*cnt))
            {
                no;
                return;
            }
            cnt1 = 0;
            cnt = 1;
            ch = s[i];
            continue;
        }
        cnt++;
    }
    while(aro < m && s1[aro] == ch)
    {
        cnt1++;
        aro++;
    }
    if(cnt1 < cnt || cnt1 > (2*cnt))
    {
        no;
        return;
    }
    if(aro < m)
    {
        no;
        return;
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