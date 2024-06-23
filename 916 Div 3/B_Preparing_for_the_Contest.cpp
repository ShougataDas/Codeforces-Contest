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
    ll n,k;
    cin>>n>>k;
    if(k == 0)
    {
        for(int i = 1;i<=n;i++)
            cout<<i<<" ";
        return;
    }
    if(k == n)
    {
        for(int i = n;i>=1;i--)
            cout<<i<<" ";
        return;
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