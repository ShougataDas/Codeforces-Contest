#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
bool cmp(pair<int,int>p,pair<int,int>q)
{
    if(p.first == q.first)
        return p.second > q.second;
    return p.first<q.first;
}
void solve()
{
    vector<pair<int,int>>p(4);
    for(int i = 0;i<4;i++)
    {
        int x,y;
        cin>>x>>y;
        p[i] = {x,y};
    }

    sort(p.begin(),p.end(),cmp);
    int len = p[0].second - p[1].second;
    int b = p[3].first - p[0].first;

    ll area = len*b;
    cout<<area<<"\n";

    
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