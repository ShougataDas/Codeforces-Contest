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
    vector<ll>a(n);
    for(ll i= 0;i<n;i++)
        cin>>a[i];
    bool flag = false;
    for(ll i = 1;i<n-1;i++)
    {
        if(a[i-1]<=a[i+1])
        {
            if(a[i] >= 2*a[i-1])
            {
                a[i+1]-=a[i-1];
                a[i]-=2*(a[i-1]);
                a[i-1] = 0;
            }
        }
    }
    ll c = 0;
    for(ll i = 0;i<n;i++)
    {
        if(a[i] == 0)
            c++;
    }
    if(c == n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
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