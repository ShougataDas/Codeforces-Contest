#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
//vector<int>coins{1,3,6,10,15};
int dp[35];
int coins[] ={1,3,6,10,15};
int coinwant(int n)
{
    if(n == 0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int ans = INT_MAX;
    for(int i = 0;i<5;i++)
    {
        int c = coins[i];
        if(n-c>=0)
            ans = min(ans,coinwant(n-c)+1);
    }
    return dp[n] = ans;
}
void solve()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    if(n<30)
    {
        cout<<coinwant(n)<<"\n";
        return;
    }
    int x = n/15;
    int y = x-1;
    int ans1 = n-(y*15);
    int ans2 = n-(x*15);

    int c1 = x+coinwant(ans2);
    int c2 = y+coinwant(ans1);

    cout<<min(c1,c2)<<"\n";

    
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