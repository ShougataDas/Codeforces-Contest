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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    while(k>0)
    {
    for(int i = n-2;i>=0;i--)
    {
        if(a[i]<=a[i+1])
        {
            int dif =  a[i+1]-a[i];
            a[i]+=dif+1;
            k = k-(dif+1);
        }
    }

    }
    int mx = -1;
    for(int i =0;i<n;i++) 
    {
        cout<<a[i]<<" ";
        mx = max(mx,a[i]);
    }
    cout<<"\n"<<mx<<"\n";
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