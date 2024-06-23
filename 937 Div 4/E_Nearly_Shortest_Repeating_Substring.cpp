#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
ll n;
string s;
bool ck(ll m)
{
    ll c = 0;
    for(ll i = 0;i<m;i++)
    {
        ll mx = LLONG_MIN;
        ll fr[26] = {0};
        ll tt = 0;
        for(ll j = i;j<n;j+=m)
        {
            ll idx = s[j]-'a';
            fr[idx]++;
            mx = max(mx,fr[idx]); 
            tt++;
        }
        c+=(tt-mx);
    }
    if(c>1)
        return false;
    return true;
}
void solve()
{
    cin>>n;
    cin>>s;
    ll ans = LLONG_MAX;
    for(ll i = 1;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            if(ck(i))
                ans = min(ans,i);
            if(ck(n/i))
                ans = min(ans,n/i);
        }
    }
    cout<<ans<<"\n";

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