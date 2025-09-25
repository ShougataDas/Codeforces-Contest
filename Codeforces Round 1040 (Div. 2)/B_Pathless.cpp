#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define dbg(...)
#endif
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
    int n, s;
    cin >> n >> s;
    int sum = 0;
    int z = 0, o = 0, two = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            z++;
        else if (a[i] == 1)
            o++;
        else
            two++;
        sum += a[i];
    }
    int need = s - sum;
    if (need < 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    if (need == 0 || need > 1)
    {
        minus;
        return;
    }
    for (int i = 0; i < z; i++)
    {
        cout << 0 << " ";
    }
    cout << 2 << " ";
    two--;
    for (int i = 0; i < o; i++)
    {
        cout << 1 << " ";
    }

    while (two--)
        cout << 2 << " ";
    cout << "\n";
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