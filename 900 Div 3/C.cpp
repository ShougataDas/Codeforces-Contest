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
    ll n,k,x;
    cin>>n>>k>>x;
    ll sum1 = (n*(n+1))/2;
    ll sum2 = (k*(k+1))/2;
    ll rem = n-k;
    ll sum3 = (rem*(rem+1))/2;
    ll sum4 = sum1-sum3;
    if(x >= sum1)
    {
        if(k == n && x == sum1)
        {
            cout<<"YES\n";
            return;
        }
        cout<<"NO\n";
        return;
    }
    if(sum2 > x)
    {
        cout<<"NO\n";
        return;
    }
    if(sum4 < x)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    
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