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
    ll mx = -1;
    ll mn = (ll)1e18;
    for(ll i = 0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(i == 0)
        {
            cout<<1;
            mx = max(mx,x);
            mn = min(mn,x);
            continue;
        }
        if(x > mn+1 && x < mx-1)
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
        mn = min(mn,x);
        mx = max(mx,x);
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