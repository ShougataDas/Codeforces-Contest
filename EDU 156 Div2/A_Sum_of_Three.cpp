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
    if(n<=6)
    {
        cout<<"NO\n";
        return;
    }
    ll rem1 = n-3;
    if(n == 9)
    {
        cout<<"NO\n";
        return;
    }
    if(rem1%3 == 0)
    {
        rem1-=2;
        cout<<"YES\n";
        cout<<rem1<<" "<<1<<" "<<4<<"\n";
    }
    else
    {
        cout<<"YES\n";
        cout<<rem1<<" "<<1<<" "<<2<<"\n";
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