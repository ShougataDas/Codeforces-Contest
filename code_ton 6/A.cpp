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
    int n,k,x;
    cin>>n>>k>>x;
    if(k>n || k>x+1) 
    {
        cout<<-1<<"\n";
        return;
    }
    ll sum = 0;
    for(int i = 0;i<k;i++) sum+=i;
    int rem = n-k;
    if(x == k)
        sum+=(rem*(x-1));
    else
        sum+=(rem*x);
    cout<<sum<<"\n";
    
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