#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9+7;
void solve()
{
    int x,y;
    cin>>x>>y;
    int ans1 = (y/2)+(y%2);
    x-=(ans1*15) - (y*4);
    if(x>0)
    {
        ans1+=(x/15);
        if(x%15 != 0)
            ans1++;
    }
    //int sq = 15;
   
    cout<<ans1<<"\n";
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