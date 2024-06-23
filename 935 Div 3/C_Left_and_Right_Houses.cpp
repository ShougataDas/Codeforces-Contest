#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define pii pair<double,ll>
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
void solve()
{
    ll n;
    string s;
    cin>>n;
    cin>>s;
    ll z = 0,o = 0;
    for(ll i = 0;i<n;i++)
    {
        if(s[i] == '0')
            z++;
        else
            o++;
    }
    ll l0 = 0,l1 = 0;
    vector<ll>idx;
    for(ll i = 0;i<n;i++)
    {
        if(s[i] == '0')
            l0++;
        else
            l1++;
        ll r1 = o-l1;
        ll l = i+1;
        ll r = n-l;
        l = (l+1)/2;
        r = (r+1)/2;
        if(l0>=l && r1>=r)
        {
            idx.push_back(1);
        }
        else
            idx.push_back(0);
    }
    double m = double(n)/2;
    ll ans;
    vector<pii>ans1;
    for(ll i = 0;i<idx.size();i++)
    {
        if(idx[i] == 1)
        {
            double dis = m-i-1;
            ans1.push_back({abs(dis),i+1});
        }
    }
    ll idx2 = (n+1)/2;
    if(o>=idx2)
    {
        ans1.push_back({m,0});
    }
    sort(ans1.begin(),ans1.end());
    cout<<ans1[0].second<<"\n";

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