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
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k && mp[a[i]] > 0)
        {
            int tar = k - a[i];
            if (mp[tar] > 0)
            {
                if(tar == a[i] && mp[a[i]] == 1)
                {
                    mp[a[i]]--;
                    continue;
                }
                count++;
                // mp[a[i]]--;

                // cout << a[i] << " " << tar << "\n";
            }
            mp[a[i]]--;
            mp[tar]--;
        }
    }
    cout << count << "\n";
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