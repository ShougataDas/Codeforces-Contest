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
    map<int,int>mp;
    ll sum = 0;
    for(int i = 1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        sum+=x;
    }
    if(n == 1) 
    {
        cout<<"NO\n";
        return;
    }
    
    int ans = mp[1];
    if(ans>(n/2))
    {
        sum-= ans;
        int ans1 = (sum-(n-ans))+ans;
        if(ans1%ans == 0 && sum!=0) cout<<"YES\n";
        else cout<<"NO\n";

    }
    else cout<<"YES\n";
    
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