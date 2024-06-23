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
// 1 2 3 4 1 2 3 4 1 2 3 4
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
 
    int rem = n/m;
    if(n%m!=0)
        rem++;
    int ans = n-rem;
    if(k>=ans)
        no;
    else
        yes;
    
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