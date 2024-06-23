#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
bool comp(pair<pair<int,int>,int>p,pair<pair<int,int>,int>q)
{
    return p.second>q.second;
}
void solve()
{
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    map<pair<int,int>,int>mp;
    vector<pair<int,int>>major;
    pair<int,int>src;
    pair<int,int>dst;
    for(int i = 0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(i<k)
        {
            mp[{x,y}] = -1;
            major.push_back({x,y});
        }
        if(i == a-1)
            src = {x,y};
        if(i == b-1)
            dst = {x,y};
    }
    vector<pair<pair<int,int>,int>>src_major;
    vector<pair<pair<int,int>,int>>dst_major;
    for(auto val : major)
    {
        if(mp[src] == -1) sum = 0;
        else
            int sum = abs(src.first - val.first) + abs(src.second - val.second);
        src_major.push_back({val,sum});
        if(mp[dst] == -1) sum = 0;
        else
            sum = abs(dst.first - val.first) + abs(dst.second - val.second);
        dst_major.push_back({val,sum});
    }
    sort(src_major.begin(),src_major.end(),comp);
    sort(dst_major.begin(),dst_major.end(),comp);
    int distance = 0;
    if(mp[src] != -1 || mp[dst]!= -1)
        distance = abs(src.first - dst.first) + abs(src.second-dst.second);
    int sum1 = 0;
    pair<pair<int,int>,int>p = src_major.back();
    if(mp[src] != -1)
        sum1 = p.second + (abs(p.first.first-dst.first)+abs(p.first.second-dst.second));
    else
        sum1 = (abs(p.first.first-dst.first)+abs(p.first.second-dst.second));
    int sum2 = 0;
    pair<pair<int,int>,int>q = dst_major.back();
    if(mp[src] != -1)
        sum1 = q.second + (abs(q.first.first-src.first)+abs(q.first.second-src.second));
    else
        sum1 = q.second;
    int ans = min({distance,sum1,sum2});
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