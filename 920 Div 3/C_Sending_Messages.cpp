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
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll>v(n+1);
    v[0]= 0;
    for(int i = 1;i<=n;i++)
        cin>>v[i];
    ll mn = 0;
    for(int i = 1;i<=n;i++)
    {
        ll x = (v[i] - v[i-1])*a;
        f-=min(x,b);
        if(f<=0)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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