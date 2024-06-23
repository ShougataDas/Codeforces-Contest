#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
ll n,x;
vector<ll>a;
bool good(ll m)
{
    ll count = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i] > m) continue;
        count+= m-a[i];
    }
    return count <= x;
}
void solve()
{
    cin>>n>>x;
    a.resize(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    ll l = 1, r = (ll)1e10;
    while(r > l+1)
    {
        ll m = l + (r-l)/2;
        if(good(m))
            l = m;
        else
            r = m;
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