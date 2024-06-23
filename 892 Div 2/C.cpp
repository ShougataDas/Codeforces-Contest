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
    int ans = -1;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            int mx = i*j;
            vector<int>idx;
            int cur = 1;
            int cost = 0;
            for(int k = n;k>=1;k--)
            {
                int limit = mx/k;
                while(cur<=n && cur<=limit)
                {
                    if(cur == j)
                    {
                        cur++;
                        continue;
                    }
                    idx.push_back(cur);
                    cur++;
                }
                if(k == i) continue;
                if(idx.empty())
                {
                    cost = -1;
                    break;
                }
                cost+=k*idx.back();
                idx.pop_back();
                
            }
            ans = max(ans,cost);

        }

    }
    cout<<ans<<"\n";
    
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