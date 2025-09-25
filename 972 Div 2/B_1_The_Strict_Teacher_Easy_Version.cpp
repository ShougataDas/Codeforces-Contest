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
    int n, m, q;
    cin >> n >> m >> q;
    int left;
    int right;
    cin >> left >> right;
    int pos;
    cin >> pos;
    if (pos <= left)
    {
        cout << left - 1 << "\n";
        return;
    }
    if (pos >= right)
    {
        cout << n - right << "\n";
        return;
    }
    if ((pos - left) > (right - pos))
    {
        int dif = (pos - left) - (right - pos);
        cout << (right - pos) + ((dif) / 2) << "\n";
    }
    else
    {
        int dif = (right - pos) - (pos - left);
        dif = max(1LL,dif);
        cout << (pos - left) + ((dif) / 2) << "\n";
    }
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