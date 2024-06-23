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
    vector<int>a(n);
    vector<int>b(m);
    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<m;i++)
    {
        cin>>b[i];
    }
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        ans = ans ^ a[i];
    }
    int orr = 0;
    for(int i = 0;i<m;i++)
    {
        orr = orr|b[i];
    }
    int ans2 = 0;
    for(int i = 0;i<n;i++)
    {
        ans2 = ans2 ^(a[i] | orr);
    }
    int mn = min(ans,ans2);
    int mx = max(ans,ans2);
    cout<<mn<<" "<<mx<<"\n";
   
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