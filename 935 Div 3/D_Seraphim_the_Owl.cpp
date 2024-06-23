#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(n);

    for(ll i = 0;i<n;i++)
        cin>>a[i];
    
    for(ll i = 0;i<n;i++)
        cin>>b[i];
    vector<ll>s_sum(n);
    s_sum[n-1] = min(a[n-1],b[n-1]);
    for(ll i = n-2;i>=0;i--)
    {
        s_sum[i] = s_sum[i+1]+min(a[i],b[i]);
    }
    ll ans = LLONG_MAX;
    for(ll i = 0;i<m;i++)
    {
        ll cur = a[i];
        if(i+1<n)
        {
            cur+=s_sum[i+1];
        }
        ans = min(ans,cur);
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