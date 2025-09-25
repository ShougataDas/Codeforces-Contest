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
    vector<int> idx;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (!a[i])
        {
            idx.push_back(i);
        }
    }
    if (idx.size() == 0)
    {
        cout << 1 << "\n";
        cout << 1 << " " << n << "\n";
        return;
    }
    if (idx.size() == n)
    {
        int k = ((n / 2) + (n % 2)) + 1;
        cout << k << "\n";
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " " << i + 1 << "\n";
        }
        cout << 1 << " " << (n / 2) << "\n";
        return;
    }
    if(idx.size() == 1)
    {
        cout << 2 << "\n";
        int indx = idx[0];
        if(indx == n-1)
        {
            cout << n-1 << " " << n << "\n";
        }
        else if(indx == 0)
        {
            cout << 1 << " " << 2 << "\n";
        }
        else
        {
            cout << indx+1 << " " << indx+2 << "\n";
        }
        cout << 1 << " " << n-1 << "\n";
        return;
    }
    int cnt = 0;
    vector<pii> ans;
    if(idx[0] > 0)
    {
        ans.push_back({1,idx[0]+1});
    }
    else
    {
        int indx = idx.back();
        ans.push_back({indx+1,indx+2});
    }
    int l = ans[0].first, r = ans[0].second;
    if (l == idx[0])
    {
        int k1, k2;
        int f = 0;
        for (int j : idx)
        {
            if (j < r)
                continue;
            else
            {
                if (!f)
                {
                    k1 = j + 1 - (r - l);
                    f = 1;
                }
                else
                    k2 = j + 1 - (r - l);
            }
        }
        ans.push_back({k1, k2});
        ans.push_back({1, 2});
    }
    else
    {
        int k1 = idx[1];
        int k2 = idx.back();
        k1 -= (r - l);
        k2 -= (r - l);
        k1++;
        k2++;
        ans.push_back({k1, k2});
        ans.push_back({1, 2});
    }
    cout << ans.size() << "\n";
    for (pii p : ans)
        cout << p.first << " " << p.second << "\n";
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