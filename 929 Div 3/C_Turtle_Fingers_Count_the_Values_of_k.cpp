#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
void solve()
{
    ll a,b,l;
    cin>>a>>b>>l;
    ll mn = min(a,b);
    ll mx = max(a,b);
    ll count_mn = 0;
    ll count_mx = 0;

    for(ll i = 0;pow(mn,i)<=l;i++)
    {
        count_mn = i;
    }
    for(ll i = 0;pow(mx,i)<=l;i++)
    {
        count_mx = i;
    }

    //cout<<count_mn<<" "<<count_mx<<"\n";
    ll count1 = 0;
    map<ll,bool>mp;
    for(ll i = 0;i<=count_mx;i++)
    {
        for(ll j = 0;j<=count_mn;j++)
        {
            ll ans1 = (ll)binpow(mn,j);
            ll ans2 = (ll)binpow(mx,i);
            ll ans = ans1*ans2;
            if(l%ans == 0)
            {
                ll rem = l/ans;
                if(!mp[rem])
                {
                    count1++;
                    mp[rem] = true;

                }
            }
            else if(ans>l)
                break;
        }
    }
    cout<<count1<<"\n";
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