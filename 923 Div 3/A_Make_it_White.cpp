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
    string s;
    cin>>s;
    ll st = -1,end = -1;
    bool flag = false;
    for(ll i = 0;i<n;i++)
    {
        if(s[i] == 'B')
        {
            if(!flag)
            {
                st = i;
                flag = true;
            }
            else
            {
                end = i;
            }
        }
    }
    if(st == -1 && end == -1)
    {
        cout<<0<<"\n";
    }
    else if(end == -1)
    {
        cout<<1<<"\n";
    }
    else
    {
        ll ans = end - st + 1;
        cout<<ans<<"\n";
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