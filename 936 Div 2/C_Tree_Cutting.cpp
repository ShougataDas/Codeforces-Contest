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
const ll n = 1e5+5;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>adj[n+1];
    ll e = n-1;
    vector<pii>ed;
    while(e--)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        ed.push_back({x,y});
    }
    ll ans = n;
    for(pii p:ed)
    {
        ll x = p.first;
        ll y = p.second;

    }
    
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