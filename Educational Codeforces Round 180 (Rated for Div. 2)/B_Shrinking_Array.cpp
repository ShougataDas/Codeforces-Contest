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
   // map<int, vector<int>> mp;
    // mp.reserve()
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
       // mp[a[i]].push_back(i);
    }
    for (int i = 1; i < n; i++)
    {
        int dif = abs(a[i] - a[i - 1]);
        if (dif < 2)
        {
            cout << 0 << "\n";
            return;
        }
    }
    if(n <= 2)
    {
        minus;
        return;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (i == 1)
        {
            int mn = min(a[0], a[1]);
            int mx = max(a[0], a[1]);
            if (a[2] >= mn && a[2] <= mx)
            {
                cout << 1 << "\n";
                return;
            }
            mn = min(a[1],a[2]);
            mx = max(a[1],a[2]);
            if(a[0] >= mn && a[0] <= mx)
            {
                cout << 1 << "\n";
                return;
            }
        }
        else if (i == n - 2)
        {
            int mn = min(a[n - 2], a[n - 1]);
            int mx = max(a[n - 2], a[n - 1]);
            if (a[n - 3] >= mn && a[n - 3] <= mx)
            {
                cout << 1 << "\n";
                return;
            }
            mn = min(a[i - 1], a[i]);
            mx = max(a[i - 1], a[i]);
            if(a[n-1] >= mn && a[n-1] <= mx)
            {
                cout << 1 << "\n";
                return;
            }
        }
        else
        {
            int mn = min(a[i - 1], a[i]);
            int mx = max(a[i - 1], a[i]);
            if (a[i - 2] >= mn && a[i - 2] <= mx)
            {
                cout << 1 << "\n";
                return;
            }
            if (a[i + 1] >= mn && a[i + 1] <= mx)
            {
                cout << 1 << "\n";
                return;
            }
            mn = min(a[i], a[i + 1]);
            mx = max(a[i], a[i + 1]);
            if (a[i - 1] >= mn && a[i - 1] <= mx)
            {
                cout << 1 << "\n";
                return;
            }
            if (a[i + 2] >= mn && a[i + 2] <= mx)
            {
                cout << 1 << "\n";
                return;
            }
        }
    }
    
    cout << -1 << "\n";
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