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
    vector<ll>a(n+1);
    a[0] = 0;
    ll tt = 0;
    for(ll i = 1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i] == m)
            tt = i;
    }
    ll l = 1;ll r =n+1;
    while(r-l>1)
    {
        ll mid = (r+l)/2;
        if(a[mid]<=m)
            l = mid;
        else
            r = mid;
    }
    if(a[l] == m)
    {
        cout<<0<<"\n";
    }
    else
    {
        cout<<1<<"\n";
        cout<<l<<" "<<tt<<"\n";
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