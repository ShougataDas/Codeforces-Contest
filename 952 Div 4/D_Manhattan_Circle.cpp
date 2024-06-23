#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9+7;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            cin>>a[i][j];
    }
    vector<int>ground;
    vector<int>height;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(a[i][j] == '#')
            {
                ground.push_back(i+1);
                height.push_back(j+1);
            }
        }
    }
    sort(ground.begin(),ground.end());
    sort(height.begin(),height.end());

    int x = ground.size();
    int y = height.size();

    cout<<ground[x/2]<<" "<<height[x/2]<<"\n";

}
 
int32_t main()
{
    fastread();
    int t = 1;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}