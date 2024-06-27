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
int n, m;


void solve()
{
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool flag = false;
    while (true)
    {
        b = a;
        flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int l = 0, r = 0, u = 0, d = 0;
                if (i > 0)
                    u = a[i - 1][j];
                if (j > 0)
                    l = a[i][j - 1];
                if (i < n - 1)
                    d = a[i + 1][j];
                if (j < m - 1)
                {
                    r = a[i][j + 1];
                }
                int mx = max({l, r, u, d});
                if (a[i][j] > mx)
                {
                    b[i][j] = mx;
                    flag = true;
                }
            }
        }
        a = b;
        if(!flag)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    // cout<<"\n";
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