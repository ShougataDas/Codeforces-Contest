#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
bool comp(pair<int,int>x,pair<int,int>y)
{
    if(x.first == y.first)
        return x.second<y.second;
    if(x.first == 0)
    {
        return x.first<y.first;
    }
    if(y.first == 0)
        return x.first<y.first;   
    return x.first>y.first;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        v[i].first = x%k;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end(),comp);
    for(int i =0;i<n;i++)
    {
        cout<<v[i].second<<" ";
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