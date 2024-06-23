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
    int n,k;
    cin>>n>>k;
    if(n!=k && k!=1)
    {
        minus;
        return;
    }
    if(n == k)
    {
        for(int i = 1;i<=n;i++)
            cout<<1<<" ";
        cout<<"\n";
    }
    else
    {
        for(int i = 1;i<=n;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
}
 
int32_t main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}