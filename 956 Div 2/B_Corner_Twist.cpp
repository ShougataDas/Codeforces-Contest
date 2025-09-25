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
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    vector<string> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<int> r1(m,0), r2(m,0), c1(n,0), c2(n,0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            r1[j] += (int) (a[i][j] - '0');
            r1[j] %= 3;
            r2[j] += (int)(b[i][j] - '0');
            r2[j] %= 3;
            c1[i] += (int)(a[i][j] - '0');
            c1[i] %= 3;
            c2[i] += (int)(b[i][j] - '0');
            c2[i] %= 3;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (c1[i] != c2[i])
        {
            no;
            return;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (r1[i] != r2[i])
        {
            no;
            return;
        }
    }
    yes;
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