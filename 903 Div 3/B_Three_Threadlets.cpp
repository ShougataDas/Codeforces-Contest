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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a == b && b == c)
    {
        cout<<"YES\n";
        return;
    }
    vector<ll>v(3);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    sort(v.begin(),v.end());
    ll j = 0;
    for(ll i = 1;i<3;)
    {
        if(v[i] == v[0])
        {
            i++;
            continue;
        }
        if(j >= 3)
        {
            break;
        }
        v[i]-=v[0];
        j++;
        
    }
    if(v[0] == v[1] && v[1] == v[2]) cout<<"YES\n";
    else cout<<"NO\n";
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