#include <bits/stdc++.h>
#include <string>
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
    string s;
    cin >> s;
    int m = s.size();
    vector<vector<int>> mn(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        mn[i][0] = stoll(s.substr(i));
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int mx = LLONG_MAX;
            for (int k = j; k < m - i; k++)
            {
                int num1 = stoll(s.substr(j, k - j + 1));
                int num2 = mn[k + 1][i - 1];
                mx = min({mx, num1 + num2, num1 * num2});
            }
            mn[j][i] = mx;
        }
    }
    cout << mn[0][n - 2] << "\n";
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
