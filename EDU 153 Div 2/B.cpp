#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
ll n,k,a,b;
void solve()
{
    cin>>n>>k>>a>>b;
    ll temp = n - min((b*k),((n/k)*k));
    ll m = max(0ll,temp-a);
    ll ans = (m/k) + (m % k);
    if(a >= (k- (m%k)))
    {
        ll ans1 = 1 + (m/k);
        ans = min(ans,ans1);
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