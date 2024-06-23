#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 998244353;
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = ((res%mod) * (a%mod))%mod;
        a = ((a%mod) * (a%mod))%mod;
        b >>= 1;
    }
    return res;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    
    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<n;i++) cin>>b[i];
    ll m;
    cin>>m;
    vector<ll>c(m);
    vector<ll>d(m);

     for(int i = 0;i<m;i++) cin>>c[i];
    for(int i = 0;i<m;i++) cin>>d[i];
    ll x = 1,y = 1;
    for(int i = 0;i<n;i++)
    {
        x = ((x%mod)*((binpow(a[i],b[i]))%mod)%mod)%mod;
    }
    for(int i = 0;i<m;i++)
    {
        y = ((y%mod)*((binpow(c[i],d[i]))%mod)%mod)%mod;
    }
    //cout<<x<<" "<<y<<"\n";
    if(x == y)
    {
        cout<<1;
        return;
    }
    cout<<x<<" "<<y<<"\n";
    vector<ll>ans;
    int count = 0;
    ll mul = ((x%mod)*(y%mod))%mod;
    ll mn = min(x,y);
    for(ll i = mn;i*i<=mul;i++)
    {
        if((mul)%i == 0)
        {
            ll temp = mul/i;
            ll gcd = __gcd(i,temp);
            if(gcd == y)
            {
                count++;
            }
        }
    }
    cout<<count*2;
}

int main()
{
    fastread();
    int t = 1;
    //cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}