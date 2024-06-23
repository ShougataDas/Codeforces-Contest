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
    ll sum = 0;
    for(ll i = 0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3 == 0)
    {
        cout<<0<<"\n";
        return;
    }
    ll ans1 = sum%3;
    if(ans1 == 2)
    {
        cout<<1<<"\n";
        return;
    }
    bool flag = false;
    for(ll i= 0;i<n;i++)
    {
        ll x = sum - a[i];
        if(x%3 == 0)
        {
            flag = true;
            break;
        }
    }
    if(flag)
        cout<<1<<"\n";
    else cout<<"2\n";
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