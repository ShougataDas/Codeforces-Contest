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
    ll n;
    cin>>n;
    ll mn = INT_MIN,mx = INT_MAX;
    ll count = 0;
    vector<int>v;
    while(n--)
    {
        ll a,x;
        cin>>a>>x;
        if(a == 1)
            mn = max(mn,x);
        else if(a == 2)
            mx = min(x,mx);
        else
            v.push_back(x);
    }
    if(mn > mx)
    {
        cout<<0<<"\n";
        return;
    }
    sort(v.begin(),v.end());
    for(ll i = 0;i<v.size();i++)
    {
        if(v[i]>=mn && v[i] <= mx)
            count++;
    }
    ll mp  = mx - mn +1;
    cout<<mp-count<<"\n";
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