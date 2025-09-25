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
    string s;
    cin >> s;
    int cnt = 0;
    int mx = 0;
    int f = 0;
    int f1 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            f1 = 1;
            if(f)
                cnt++;
            int j = i;
            while (j >= 0 && s[j] == s[i])
            {
                j--;
            }
            i = j + 1;

        }
        else
        {
            f = 1;
            dbg(i);
            if(f1)
                cnt++;
            int j = i;
            while (j >= 0 && s[j] == s[i])
            {
                j--;
            }
            i = j + 1;
        }
    }
    // if (s[0] == '1')
    //     cnt++;
    cout << cnt << "\n";
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