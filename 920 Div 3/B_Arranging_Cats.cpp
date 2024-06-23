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
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int x = 0,y = 0;
    for(int i = 0;i<n;i++)
    {
        if(s[i] == '1'  && s[i]!=t[i])
            x++;
        if(t[i] == '1' && t[i]!=s[i])
            y++;
    }
    cout<<max(x,y)<<"\n";
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