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
    ll sum  = 0;
    for(ll i = 0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(n == 1)
    {
        cout<<"YES\n";
        return;
    }
    if(sum%n == 0)
    {
        ll rem = sum/n;
        ll sum1 = 0;
        for(ll i = 0;i<n;i++)
        {
            if(a[i] > rem)
            {
                sum1+=(a[i]-rem);
            }
            else if(a[i] < rem)
            {
                if(rem-a[i] <= sum1)
                {
                    sum1 = sum1-(rem-a[i]);
                }
                else
                {
                    cout<<"NO\n";
                    return;
                }
            }
        }
       // cout<<sum1;
        if(sum1!=0)
            cout<<"NO\n";
        else cout<<"YES\n";
    }
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