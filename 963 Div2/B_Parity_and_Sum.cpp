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
    int mx = 0;
    int o = 0;
    int mx1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2)
            mx = max(mx, a[i]), o++;
        else
            mx1 = max(mx1, a[i]);
    }
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i] % 2) != (a[i + 1] % 2))
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << 0 << "\n";
        return;
    }
    int ans = 0;
    int cnt = mx;
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i] >= cnt)
                continue;
            ans++;
            a[i] += cnt;
            cnt = max(a[i], cnt);
        }
    }
    flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << ans << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == cnt)
        {
            a[i] = cnt + mx1;
            ans++;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            ans++;
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