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
    int n, x;
    cin >> n >> x;
    vector<pii> a(n);
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        mx += a[i].second;
    }
    vector<vector<int>> hapi(n + 1, vector<int>(mx+1));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= mx; j++)
            hapi[i][j] = LLONG_MIN;
    }
    hapi[1][0] = x;
    if (a[0].first == 0)
    {
        hapi[1][a[0].second] = x;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= mx; j++)
        {
            hapi[i][j] = hapi[i - 1][j] + x;
            if (j >= a[i - 1].second)
            {
                int p1 = j - a[i - 1].second;
                int p2 = hapi[i - 1][p1];
                if (p2 >= a[i - 1].first)
                {
                    hapi[i][j] = max(hapi[i][j], p2 - a[i - 1].first + x);
                }
            }
        }
    }
    int ans = 0;
    for (int i = mx; i >= 0; i--)
    {
        if (hapi[n][i] >= 0)
        {
            ans = i;
            break;
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