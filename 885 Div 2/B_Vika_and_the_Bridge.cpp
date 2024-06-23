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
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i = 0;i<n;i++) cin>>a[i];
    vector<ll>last(k+1,-1);
    vector<multiset<ll>>dis(k+1);
    for(ll i =0;i<n;i++)
    {
        ll jump = i - last[a[i]] - 1;
        last[a[i]] = i;
        dis[a[i]].insert(jump);
        while(dis[a[i]].size() > 2)
        {
            dis[a[i]].erase(dis[a[i]].begin());
        }
    }
    ll ans = n;
    for(ll i = 0;i<=k;i++)
    {
        if(last[i]!=-1)
        {
            ll jump = n-last[i] - 1;
            dis[i].insert(jump);
            while(dis[i].size() > 2)
            {
                dis[i].erase(dis[i].begin());
            }
            ll val1 = *dis[i].begin();
            ll val2 = *dis[i].rbegin();
            ans = min(ans,max(val1,val2/2));
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