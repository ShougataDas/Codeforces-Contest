#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans;
    if(k>40) ans = n+1;
    else 
    {
        ll power = pow(2,k);
        ans = min(n+1,power);
    }
    cout<<ans<<"\n";
}

int main()
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