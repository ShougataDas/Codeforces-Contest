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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 2; i < n; i++)
    {
        int l = 0, r = i - 1;
        while (l < r)
        {
            int sum = a[l] + a[r];
            if (sum > a[i])
            {
                sum += a[i];
                int mx = -1;
                if (i == n - 1)
                    mx = a[n - 2];
                else
                    mx = a[n - 1];
                if (sum > mx)
                {
                    ans += (r - l);
                    r--;
                }
                else
                    l++;
            }
            else
            {
                l++;
            }
        }
    }
    cout << ans << "\n";
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