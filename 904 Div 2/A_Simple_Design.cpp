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
    ll n,x;
    cin>>n>>x;
    ll temp = n;
    while(true)
    {
        ll sum = 0;
        ll temp1 = temp;
        while(temp1)
        {
            sum+=(temp1%10);
            temp1/=10;
        }
        if(sum%x == 0)
        {
            break;
        }
        temp++;
    }
    cout<<temp<<"\n";

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