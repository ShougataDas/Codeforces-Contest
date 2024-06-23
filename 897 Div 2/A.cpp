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
    vector<pair<int,int>>a(n);
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i] = {x,i};
    }
    sort(a.begin(),a.end());
    vector<int>b(n);
    for(int i = n-1;i>=0;i--)
    {
        b[a[i].second] = n-i;
    }
    for(int i = 0;i<n;i++)
        cout<<b[i]<<" ";
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