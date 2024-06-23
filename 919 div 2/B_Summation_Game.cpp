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
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>a(n);
    for(ll i =0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    if(n == 1)
    {
        cout<<0<<"\n";
        return;
    }
    if(y>x)
    {
        ll rem = n-x;
        ll sum = 0;
        ll mn = min(rem,y);
        rem--;
        while(mn--)
        {
            sum+=(a[rem]*-1);
            rem--;
        }
        ll sum1 = 0;
        for(ll i = 0;i<=rem;i++)
            sum1+=a[i];
        cout<<sum+sum1<<"\n";
        return;
    }
    ll idx1 = n-y;
    ll sum1 = 0;
    ll sum2 = 0;
    for(ll i = 0;i<idx1;i++)
        sum1+=a[i];
    for(ll i = idx1;i<n;i++)
        sum2+=a[i];
    idx1--;
    ll mn = INT_MIN;
    ll count = 1;
    ll tmp = x;
    while(x--)
    {
        mn = max(mn,(sum1-sum2));
        sum1-=a[idx1];
        sum2-= a[n-count];
        sum2+=a[idx1];
        idx1--;
        count++;
    }
    if(n == tmp)
        mn = max(mn,(ll)0);
    cout<<mn<<"\n";
    
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