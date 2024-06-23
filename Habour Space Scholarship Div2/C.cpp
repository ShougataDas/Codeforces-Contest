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
    vector<int>ans;
    int now = 1;
    while(now<=n)
    {
        ans.push_back(now);
        now*=2;
    }
    if(ans.back()!=n)
    {
        int dif = n-ans.back();
        for(int i = 30;i>=0;i--)
        {
            if(dif&(1<<i))
            {
                ans.push_back(ans.back()+(1<<i));
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(auto val : ans)
        cout<<val<<" ";
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