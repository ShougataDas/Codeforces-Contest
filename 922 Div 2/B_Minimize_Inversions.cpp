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
    vector<pair<ll,ll>>a(n);
    for(ll i = 0;i<n;i++)  
        cin>>a[i].first;
     
    for(ll i = 0;i<n;i++)  
        cin>>a[i].second;
    sort(a.begin(),a.end());
    for(ll i = 0;i<n;i++)
        cout<<a[i].first<<" ";
    cout<<"\n";
    
    for(ll i = 0;i<n;i++)
        cout<<a[i].second<<" ";
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