#ifndef ONLINE_JUDGE
#include"debugger.h"
#else
#define dbg(...)
#endif
#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(7); cout.setf(ios::fixed,ios::floatfield);
using namespace std;
const int mod = 1e9+7;
const double PI = acos(-1);
const double eps = 1e-9;

void solve(int cx)
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }   
    int ans = 0;
    vector<pii>val(n);
    for (int i = 0; i < n; i++)
    {
        ans+= abs(a[i] - b[i]);
        val[i].first = a[i] - b[i];
        val[i].second = i;   
    }
    sort(val.begin(), val.end());
    int mn = 1e18;
    for (int i = 0; i < n-1; i++)
    {
        int ff = abs(a[val[i].second] - b[val[i].second]) + abs(a[val[i+1].second] - b[val[i+1].second]);
        int ss = abs(a[val[i].second] - b[val[i+1].second]) + abs(a[val[i+1].second] - b[val[i].second]);
        mn = min(mn,(max(0LL, ss-ff)));
    }
    if(mn == 1e18)
        mn = 0;
    cout << ans + mn << endl;
}
int tc = 1;
 
int32_t main()
{
    fastread();
    //fraction();
    if(tc)
    {
        int t;
        cin >> t;
        for(int i = 1; i <= t; i++)
        {
            solve(i);
        }
    }
    else
    {
        solve(0);
    }
     
    return 0;
}