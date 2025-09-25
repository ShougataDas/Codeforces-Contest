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
    vector<int> suff(n);

    for (int i = 0; i < n; i++)
        cin >> a[i], suff[i] = a[i];

    for (int i = n - 1; i >= 1; i--)
    {
        if (suff[i - 1] <= suff[i])
        {
            suff[i - 1] = suff[i] + 1;
        }
    }
    cout << suff[0] << "\n";
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