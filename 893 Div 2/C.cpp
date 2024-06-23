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
    vector<bool>visited(n,false);
    for(int i = 1;i<=n;i++)
    {
        if(i == 1)
        {
            cout<<i<<" ";
            visited[i] = true;
            continue;
        }
        if(!visited[i])
        {
            cout<<i<<" ";
            for(int j = i*2;j<=n;j*=2)
            {
                cout<<j<<" ";
                visited[j] = true;
            }
        }
    }
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