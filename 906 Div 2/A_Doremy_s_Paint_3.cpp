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
    map<ll,ll>mp;
   
    for(ll i = 0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    if(n == 2)
    {
        cout<<"Yes\n";
        return;
    }
    ll mx = (n/2) + (n%2);
    ll mn = n/2;
    bool flag = true;
    ll c = 0;
    ll prv;
    for(ll i = 0;i<n;i++)
    {
        if(mp[a[i]] == mn)
        {
            if(c == 0)
            {
                prv = a[i];
                c++;
                continue;
            }
            if(prv == a[i])
            {
                continue;
            }
            flag = false;
            break;
        }
        if(mp[a[i]] != mn && mp[a[i]]!= mx && mp[a[i]]!=n)
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout<<"Yes\n";
    }
    else cout<<"No\n";
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