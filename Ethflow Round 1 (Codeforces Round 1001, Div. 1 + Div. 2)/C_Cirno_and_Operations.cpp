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
    int sum = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (n == 1)
    {
        cout << a[0] << "\n";
        return;
    }
    /// int mx = -1;
    int cnt1 = 1;
    while (cnt1 < n)
    {
        vector<int> tem = a;
        int cnt2 = 0;
        while (cnt2 < cnt1)
        {
            int sz = tem.size();
            if (sz == 1)
                break;
            vector<int> diff;
            if (tem[0] > tem[sz - 1])
            {
                for (int i = sz - 1; i > 0; i--)
                {
                    diff.push_back(tem[i - 1] - tem[i]);
                }
            }
            else
            {

                for (int i = 0; i < sz - 1; i++)
                {
                    diff.push_back(tem[i + 1] - tem[i]);
                }
            }
            tem = diff;
            cnt2++;
        }
        int sum2 = accumulate(tem.begin(), tem.end(), 0LL);
        sum = max(sum, sum2);
        cnt1++;
    }
    cout << sum << "\n";
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
