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
    int n,m;
    cin>>n>>m;
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if((r1 == 1 && c1 == 1) || (r1 == n && c1 == m) || (r1 == 1 && c1 == m) || (r1 == n && c1 == 1))
    {
        cout<<2<<"\n";
        return;
    }
    if((r2 == 1 && c2 == 1) || (r2 == n && c2 == m) || (r2 == 1 && c2 == m) || (r2 == n && c2 == 1))
    {
        cout<<2<<"\n";
        return;
    }
    if(r1 == 1 || c1 == 1 || r1 == n || c1 == m)
    {
        cout<<3<<"\n";
        return;
    }
    if(r2 == 1 || c2 == 1 || r2 == n || c2 == m)
    {
        cout<<3<<"\n";
        return;
    }
    
    else cout<<4<<"\n";
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