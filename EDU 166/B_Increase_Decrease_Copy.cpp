#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++)
        cin >> b[i];
    int target = b[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] >= target && b[i] <= target) || (b[i] >= target && a[i] <= target))
        {
            flag = true;
            break;
        }
    }
    int mn_num = -1;
    int min_dis = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        if (abs(b[n] - a[i]) < min_dis)
        {
            min_dis = abs(b[n] - a[i]);
            mn_num = a[i];
        }
    }
    int mn_num1 = -1;
    int min_dis1 = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        if (abs(b[n] - b[i]) < min_dis1)
        {
            min_dis1 = abs(b[n] - b[i]);
            mn_num1 = b[i];
        }
    }
    if (min_dis < min_dis1)
        a[n] = mn_num;
    else
        a[n] = mn_num1;
    int ans = 1;
    for (int i = 0; i <= n; i++)
        ans += abs(a[i] - b[i]);
    if (flag)
    {
        ans -= (abs(b[n] - a[n]));
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