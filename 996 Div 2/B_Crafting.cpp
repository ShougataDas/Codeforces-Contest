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
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int>dif(n);
    for (int i = 0; i < n; i++)
    {       
        dif[i] = a[i] - b[i];
    }

    sort(dif.begin(),dif.end());

    if(dif[1] < 0)
    {
        no;
        return;
    }
    if(dif[0] >= 0)
    {
        yes;
        return;
    }

    int sum = abs(dif[0]);
    for(int i = 1;i<n;i++)
    {
        if(dif[i] < sum)
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