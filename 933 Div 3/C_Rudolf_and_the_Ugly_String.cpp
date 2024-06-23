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
    ll c = 0;
    for(ll i = 1;i<n-1;i++)
    {
        if((s[i-1] == 'p' && s[i] == 'i' && s[i+1] == 'e') || (s[i-1] == 'm' && s[i] == 'a' && s[i+1] == 'p'))
        {
            c++;
        }
    }
    for(ll i = 2;i<n-2;i++)
    {
        if(s[i-2] == 'm' && s[i-1] == 'a' && s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e')
        {
            c--;
        }
    }
    cout<<c<<"\n";
    
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