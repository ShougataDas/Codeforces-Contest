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
    ll count1 = n/x;
    ll count2 = n/y;
    //map<ll,ll>mp;
    ll mx= max(x,y);
    ll mn = min(x,y);
    ll gcd  = __gcd(mx,mn);
    ll lcm = (x*y)/gcd;
    ll count3 = n/lcm;
    
    
   // ll count3 = (n/mul); 
    //cout<<count1<<" "<<count2<<" "<<count3<<"\n";
    count1-=count3;
    count2-=count3;
    ll sum = (n*(n+1))/2;
    ll sum1 = 0,sum2 = 0;
    ll ext1 = (n-count1);
   // ext1++;
    ll rem = (ext1*(ext1+1))/2;
    sum1 = sum-rem;
   // count2--;
    sum2 = (count2*(count2+1))/2;
    cout<<sum1-sum2<<"\n";

    
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