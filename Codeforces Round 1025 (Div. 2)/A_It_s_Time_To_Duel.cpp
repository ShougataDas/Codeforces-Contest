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
   int n;
   cin >> n;
   vector<int>a(n);
   int one = 0;
   for (int i = 0; i < n; i++)
   {
        cin >> a[i];
        if(a[i])
            one++;   
   }
   int f = 0;
   if(n == 2)
   {
        if(a[0] == a[1])
            yes;
        else
            no;
        return;
   }
   if(one == n)
   {
        yes;
        return;
   }
   for (int i = 1; i < n; i++)
   {
        if(a[i] == 0 && a[i-1] == 0)
        {
            yes;
            return;
        }
   }


   no;
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