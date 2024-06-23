#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define pii pair<ll,ll>
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
const ll N = 2e5+10;
void solve()
{
    ll n;
    cin>>n;
  //  pii a[n];
    map<ll,ll>mp;
    for(ll i =0;i<n;i++)
    {
        ll x;
        cin>>x;
      //  a[i] = {x,i+1};
        mp[x]++;
    }
    ll ans;
    ll cnt = 0;
    for(ll i = 0;i<N;i++)
    {
        if(mp[i] == 0)
        {
           ans = i;
           break; 
        }
        if(mp[i] == 1)
        {
           cnt++;
        }
        if(mp[i] == 1 && cnt == 2)
        {
            ans = i;
            break;
        }
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