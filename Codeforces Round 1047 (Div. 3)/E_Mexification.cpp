#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define dbg(...)
#endif
#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define endl '\n'
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

void solve(int cx)
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int mex = 0;
    while (mp.count(mex))
        mex++;
    if (k == 1)
    {
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < mex; i++)
        {
            if (mp[i] == 1)
                cnt++;
        }
        ans = cnt + (n - cnt) * mex;
        cout << ans << endl;
        return;
    }
    int cnt = 0;
    int cnt1 = -1;
    for (int i = 0; i < mex; i++)
    {
        if (mp[i] == 1)
            cnt++;
        else if(mp[i] > 1)
        {
            if (cnt1 == -1)
                cnt1 = i;
        }
    }

    int ans = 0;

    if (cnt1 != -1)
    {
        int sum = cnt1 * (cnt1 - 1) / 2;
        if (k & 1)
            ans = sum + (n - cnt1) * (cnt1 + 1);
        else
            ans = sum + (n - cnt1) * cnt1;
    }
    else
    {
        int sum = mex * (mex - 1) / 2;
        if (n - mex == 0)
            ans = sum;
        else if (n - mex == 1)
            ans = sum + mex;
        else
        {
            if (k & 1)
                ans = sum + (n - mex) * mex;
            else
                ans = sum + (n - mex) * (mex + 1);
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    fastread();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}
