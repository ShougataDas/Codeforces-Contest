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
    for(int i = 1;i<=26;i++)
    {
        for(int j = 1;j<=26;j++)
        {
            for(int k = 1;k<=26;k++)
            {
                if(i+j+k == n)
                {
                    cout<<char(i+96)<<char(j+96)<<char(k+96)<<endl;
                    return;
                }
            }
        }
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