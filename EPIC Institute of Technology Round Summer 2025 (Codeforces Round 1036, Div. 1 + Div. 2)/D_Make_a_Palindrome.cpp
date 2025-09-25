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
    int n, k;
    cin >> n >> k;
    k--;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k == 1)
    {
        yes;
        return;
    }
    int i = 0, j = n - 1;
    int f = 0;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            f = 1;
            break;
        }
        i++;
        j--;
    }
    if (!f)
    {
        yes;
        return;
    }
    vector<int> tem = a;
    sort(tem.begin(), tem.end());
    int mid = tem[k];
    vector<int> idx;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mid)
        {
            idx.push_back(a[i]);
        }
    }
    i = 0, j = (int)idx.size() - 1;
    f = 0;
    while (i < j)
    {
        if (idx[i] != idx[j])
        {
            f = 1;
            break;
        }
        i++;
        j--;
    }
    if (f)
    {
        no;
        return;
    }
    int sz = idx.size();
    if (sz >= k)
    {
        yes;
        return;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (tem[i] == mid)
        {
            cnt++;
        }
    }
    int need = k - sz;
    if (cnt < need)
    {
        no;
        return;
    }
    if ((sz % 2 == 1) && (need % 2 == 1))
    {
        no;
        return;
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