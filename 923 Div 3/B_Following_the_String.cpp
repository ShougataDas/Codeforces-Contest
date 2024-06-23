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
    for(ll i = 0;i<n;i++)
        cin>>a[i];
    string s;
    char ch = 'a';
    int fr[26] = {0};
    for(ll i = 0;i<n;i++)
    {
        for(ll j = 0;j<26;j++)
        {
            if(fr[j] == a[i])
            {
                s+=char(j+97);
                fr[j]++;
                break;
            }
        }
    }
    cout<<s<<"\n";
    
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