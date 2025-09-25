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

bool cmp(vector<int> &x, vector<int> &y)
{
    return x[0] < y[0];
}
bool cmp1(vector<int> &x, vector<int> &y)
{
    return x[1] < y[1];
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        a[i][0] = x;
        a[i][1] = y;
        a[i][2] = i;
    }
    sort(a.begin(), a.end(),cmp);
    sort(a.begin(),a.begin() + (n / 2), cmp1);
    sort(a.begin()+(n/2),a.end(), cmp1);

    int i = 0, j = n - 1;
    while(i < j)
    {
        cout << a[i][2] + 1 << " " << a[j][2] + 1 << "\n";
        i++;
        j--;
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