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
    string s;
    cin >> s;
    int z = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (i == 0)
                z++;
            else if (s[i - 1] == '1')
                z++;
        }
        else
            o++;
    }
    if (z >= o)
        cno;
    else
        cyes;
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