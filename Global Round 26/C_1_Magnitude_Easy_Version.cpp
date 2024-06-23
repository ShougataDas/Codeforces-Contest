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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<int> pre_sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pre_sum[i] = pre_sum[i - 1] + a[i];

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cur_sum = abs(pre_sum[i - 1] + a[i]);
        int prv_sum = ans + a[i];
        ans = max(cur_sum, prv_sum);
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