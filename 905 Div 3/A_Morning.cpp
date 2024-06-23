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
    string s;
    cin>>s;
    ll ans = 0;
    ll last = 1;
    for(ll i = 0;i<4;i++)
    {
        ll dig = s[i] - '0';
        if(dig == 0)
        {
            ans+= abs(10-last)+1;
            last = 10;
            continue;
        }
        ans+=abs(dig - last) + 1;
        last = dig;
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