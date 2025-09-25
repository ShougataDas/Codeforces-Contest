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

    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> cnt(n, vector<int>(2,0));

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i][j] == 1)
                cnt[i][1]++;
            else
                break;
        }
    }

    vector<int>s(n);

    for (int i = 0; i < n; i++)
    {
        s[i] = cnt[i][1];
    }

    sort(s.begin(),s.end());
    int mex = 0;
    for(int i : s)
    {
        if(i >= mex)
            mex++;
    }
    cout << mex << "\n";
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