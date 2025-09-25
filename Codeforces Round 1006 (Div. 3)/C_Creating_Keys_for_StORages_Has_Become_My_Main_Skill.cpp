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
    vector<int> a(n,0);
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
        o |= i;
    }
    
    if(o != k)
    {
        vector<int> fre(31, 0);
        for (int j = 0; j < n; j++)
        {
            for (int i = 30; i >= 0; i--)
            {
                if ((a[j] >> i) & 1)
                    fre[i]++;
            }
        }
        int cur = n - 1;
        while (o != k)
        {
            for (int i = 30; i >= 0; i--)
            {
                if ((a[cur] >> i) & 1)
                    fre[i]--;
            }
            int ory = 0;
            for (int i = 30; i >= 0; i--)
            {
                if (fre[i] > 0)
                    ory |= (1 << i);
            }
            a[cur] = 0;
            if ((ory | k) == k)
            {
                a[n - 1] = (ory | k);
                break;
            }
            o = ory;
            cur--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";   
    }
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