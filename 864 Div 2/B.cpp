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
    int a[n][n];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
            cin>>a[i][j];
    }
    int ans[n][n];
    for(int i = n-1;i>=0;i--)
    {
        for(int j = n-1;j>=0;j--)
        {
            ans[n-i-1][n-j-1] = a[i][j];
        }
    }
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(a[i][j] != ans[i][j]) count++;
        }
    }
    if(count == 0 && m!=0)
    {
        cout<<"NO\n";
        return;
    }
    if(count<=m)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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