#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
ll n,x,y;
auto cmp(ll z)
{
    return (x-(z%x))%x;
}
void solve()
{
    cin>>n>>x>>y;
    vector<ll>a(n);
    for(ll i = 0;i<n;i++)
        cin>>a[i];
    map<ll,map<ll,ll>>mp;
    for(ll i = 0;i<n;i++)
    {
        mp[a[i]%x][a[i]%y]++;
    }
    ll ans = 0;
    for(ll i : a)
    {
        ans+=mp[cmp(i)][i%y] - (i%x == cmp(i));
    }
    cout<<ans/2<<"\n";
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