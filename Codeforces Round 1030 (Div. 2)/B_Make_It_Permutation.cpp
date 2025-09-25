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
    vector<vector<int>>ans;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n-i+2 < n)
        {
            ans.push_back({i,1,n-i+1});
            ans.push_back({i,n-i+2,n});
        }
        else
        {
            ans.push_back({i,1,n-i+1});
        }
    }
    cout << ans.size() << "\n";
    for(auto x: ans)
    {
        for(int j : x)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
  
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