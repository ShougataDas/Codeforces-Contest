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
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    vector<int> ans;
    int f = 0;
    int count = 0;
    for (auto [key, val] : mp)
    {
        if (val >= 2)
        {
            val = min(val, 4LL);
            int tar = val * key;

            if (val == 4)
            {
                cout << key << " " << key << " " << key << " " << key << "\n";
                return;
            }
            if (val == 3)
            {
                for (int i = 0; i < n; i++)
                {
                    if (a[i] < tar && a[i] != key)
                    {
                        cout << key << " " << key << " " << key << " " << a[i] << "\n";
                        return;
                    }
                }
                ans.push_back(key);
                ans.push_back(key);
                f = 1;
            }
            if (val == 2)
            {
                ans.push_back(key);
                ans.push_back(key);
                f = 1;
            }
        }
    }
    if (!f)
        minus;
    else
    {
        if (ans.size() >= 4)
        {
            for (int i = 0; i < 4; i++)
                cout << ans[i] << " ";
            cout << "\n";
            return;
        }
        vector<int> one;

        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] == 1)
                one.push_back(a[i]);
        }
        sort(one.begin(), one.end());
        dbg(one);
        int tar = ans[0] * 2;

        for (int i = 0; i < one.size() - 1; i++)
        {
            if (tar + one[i] > one[i + 1])
            {
                cout << ans[0] << " " << ans[0] << " " << one[i] << " " << one[i + 1] << "\n";
                return;
            }
        }
        minus;
    }
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