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
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    multiset<ll>m;
    int i = 0 , j = 0;
    vector<ll>vac;
    ll cnt = 0;
    while(j<n)
    {
        m.insert(a[j]);
        if(j<k-1){j++;continue;}
        ll mx = *m.rbegin();
        if(mx<=q) cnt++;
        else{vac.push_back(cnt);cnt = 0;}
        m.erase(m.find(a[i]));
        i++;
        j++;
    }
    vac.push_back(cnt);
    ll ans = 0;
    for(auto val : vac) ans+=((val*(val+1)))/2;
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