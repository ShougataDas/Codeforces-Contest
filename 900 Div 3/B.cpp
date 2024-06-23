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
    vector<ll>a(n);
    for(int i = 0;i<n;i++)
    {
        if(i == 0) a[i] = 2;
        if(i == 1) a[i] = 3;
        if(i == 2) a[i] = 4;
        if(i == 3) a[i] = 5;
        if(i == 4) a[i] = 7;
        if(i == 5) a[i] = 9;
        else if(i>5) a[i] = a[i-1] + 1;
        
    }
    for(int i = 0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    
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