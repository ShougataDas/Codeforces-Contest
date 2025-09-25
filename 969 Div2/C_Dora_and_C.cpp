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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> ans;
    int g = __gcd(a, b);
    for (int i = 0; i < n; i++)
    {
        int cur = v[i] % g;
        ans.push_back(cur);
    }
    sort(ans.begin(), ans.end());
    int mn = LLONG_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        int cur = ans[i] + g;
        mn = min(mn, (cur - ans[i + 1]));
    }
    cout << min(mn, ans[n - 1] - ans[0]) << "\n";
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