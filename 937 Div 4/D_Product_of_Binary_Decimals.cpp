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
const ll N = 1e5;
bool is_valid(ll d)
{
    while(d > 0)
    {
        ll rem = d%10;
        if(rem == 0 || rem == 1)
        {
            d/=10;
            continue;
        }
        return false;
    }
    return true;
}
void solve()
{
    vector<ll>a;
    for(ll i = 2;i<=N;i++)
    {
        if(is_valid(i))
            a.push_back(i);

    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll idx = a.size()-1;
        while(n>0)
        {
            if(idx<0)
                break;
            if(n%a[idx] == 0)
            {
                n/=a[idx];
            }
            else
                idx--;
        }
        if(n>1)
            no;
        else
            yes;
    }

}
 
int main()
{
    fastread();
    solve();
     
    return 0;
}