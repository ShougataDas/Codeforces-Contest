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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
   // ll rem = n-k;
    ll fr[26] = {0};
    for(ll i = 0;i<n;i++)
    {
        ll ch = s[i] - 'a';
        fr[ch]++;
    }
  //  ll flag = true;
    ll odd_count = 0;
   // ll even_count = 0;
    for(ll i = 0;i<26;i++)
    {
        if(fr[i]>0)
        {
             if(fr[i] % 2 == 1) odd_count++;
        }
    }
    if(odd_count > k+1) cout<<"NO\n";
    else cout<<"YES\n";
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