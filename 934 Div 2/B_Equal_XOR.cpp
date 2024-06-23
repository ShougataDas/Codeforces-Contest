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
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    vector<ll>b(n);

    map<ll,ll>mp1;
    map<ll,ll>mp2;
    for(ll i = 0;i<n;i++)
    {
        cin>>a[i];
        mp1[a[i]]++;
    }
    
    for(ll i = 0;i<n;i++)
    {
        cin>>b[i];
        mp2[b[i]]++;
    }
    vector<ll>l;
    vector<ll>r;
    for(ll i = 1;i<=2*n;i++)
    {
        if(l.size() == 2*k)
                break;
        if(mp1[i] == 2)
        {
            l.push_back(i);
            l.push_back(i);
        }
    }
    
    for(ll i = 1;i<=n;i++)
    {
        if(r.size() == 2*k)
                break;
        if(mp2[i] == 2)
        {
            r.push_back(i);
            r.push_back(i);

        }
    }
    
    if(l.size()<2*k)
    {
        for(ll i = 1;i<=2*n;i++)
        {
            if(l.size() == 2*k)
                break;
            if(mp1[i] == 1)
                l.push_back(i);
        }
    }
    
    if(r.size()<2*k)
    {
        for(ll i = 1;i<=2*n;i++)
        {
            if(r.size() == 2*k)
                break;
            if(mp2[i] == 1)
                r.push_back(i);
        }
    }
    for(ll x:l)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    
    for(ll x:r)
    {
        cout<<x<<" ";
    }
    cout<<"\n";


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