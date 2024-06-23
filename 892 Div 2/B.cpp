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
    vector<vector<int>>a(n);
    for(int i = 0;i<n;i++)
    {
        int m;
        cin>>m;
        for(int j = 0;j<m;j++)
        {
            int x;
            cin>>x;
            a[i].push_back(x);
        }
    }
    for(int i =0;i<n;i++)
    {
        sort(a[i].begin(),a[i].end());
    }
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    int idx;
    int mn = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        if(a[i][1]<mn)
        {
            idx = i;
            mn = a[i][1];
        }

    }
    int mini = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<a[i].size();j++)
            mini = min(mini,a[i][j]);
    }
    ll sum = 0;
    for(int i =0;i<n;i++)
    {
        if(i == idx)
            sum+=mini;
        else
            sum+=a[i][1];
    }
    cout<<sum<<"\n";
    
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