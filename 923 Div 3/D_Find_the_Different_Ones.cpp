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
    vector<ll>a(n);
    for(ll i= 0;i<n;i++)
        cin>>a[i];
    vector<ll>next(n);
    next[n-1] = n;
    for(ll i = n-2;i>=0;i--)
    {
        if(a[i]!=a[i+1])
            next[i] = i+1;
        else
            next[i] = next[i+1];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        l--,r--;
        if(next[l]<=r)
            cout<<l+1<<" "<<next[l]+1<<"\n";
        else
            cout<<-1<<" "<<-1<<"\n";
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