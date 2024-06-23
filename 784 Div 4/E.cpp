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
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i =0;i<n;i++)
        cin>>a[i];
    map<char,ll>mp;
    for(ll i =0;i<n;i++)
    {
        string x = a[i];
        for(char ch : x)
            mp[ch]++;
    }
    ll count = 0;
    for(ll i =0;i<n;i++)
    {
        string x = a[i];
        if(mp[x[0]] == 1 && mp[x[1]] == 1) count++;

    }
    cout<<n-count<<"\n";
    
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