#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;

void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>pos(n+1,-1);
    for(ll i = 0;i<n;i++)
    {
        cin>>a[i];
        pos[a[i]] = i+1;
    }
    ll ans = 0;
    ll last = -1;
    for(ll i = 2;i<=n;i++)
    {
        if(pos[i]<pos[i-1]) ans++;
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