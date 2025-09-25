#ifndef ONLINE_JUDGE
#include"debugger.h"
#else
#define dbg(...)
#endif
#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9+7;
void solve()
{
    int l,r;
    cin >> l >> r;
    int tt = 0;
    int single = 2*3*5*7;
    for(int i = 0; i < single; i++)
    {
        if(__gcd(i,single) == 1)
            tt++;
    }
    int block1 = (l-1)/single;
    int ans1 = block1 * tt;
    int rem1 = (l-1) % single;
    for (int i = 0; i <= rem1; i++)
    {
        if(__gcd(i, single) == 1)
        {
            ans1++;
        }
    }
    int block2 = r / single;
    int ans2 = block2 * tt;
    int rem2 = r % single;
    for (int i = 0; i <= rem2; i++)
    {
        if(__gcd(i, single) == 1)
        {
            ans2++;
        }
    }
    cout << ans2 - ans1 << "\n";
}
 
int32_t main()
{
    fastread();
    int t = 1;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}