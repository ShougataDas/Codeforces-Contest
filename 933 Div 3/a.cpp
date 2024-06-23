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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n);
    vector<ll>b(m);
    for(ll i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(ll i = 0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    ll count = 0;
    for(ll i = 0;i<n;i++)
    {
        for(ll j =0;j<m;j++)
        {
            if(a[i]+b[j]<=k)
                count++;
        }
    }
    cout<<count<<"\n";
    
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