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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int found = 0;
        for (int j = 0; j < n; j++)
        {
           if(found + i >= m)
                break;
            if(b[found+i] == a[j])
                found++;
        }
        count = max(count,found);
    }
    cout << n + m - count<< "\n";
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