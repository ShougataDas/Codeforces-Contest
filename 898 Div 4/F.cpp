#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
ll n,k;
vector<ll>a,h,pref,len;
bool good(ll m)
{
    for(ll i = 0;i<n-m+1;i++)
    {
        if(len[i]< m) continue;
        ll sum = pref[i+m] - pref[i];
        if(sum<=k)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    cin>>n>>k;
    a.resize(n);
    pref.resize(n+1);
    len.resize(n);
    h.resize(n);
    pref[0] = 0;
    for(ll i = 0;i<n;i++) {cin>>a[i]; pref[i+1] = pref[i]+a[i];}
    for(ll i = 0;i<n;i++) cin>>h[i];
    len[n-1] = 1;
    for(ll i = n-2;i>=0;i--)
    {
        if(h[i] % h[i+1] == 0)
            len[i] = len[i+1] + 1;
        else
            len[i] = 1;
    }
    ll l = 0, r = 1e6;
    while(r > l+1)
    {
        ll m = l+(r-l)/2;
        if(good(m))
        {
            l = m;
        }
        else r = m;
    }
    cout<<l<<"\n";
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