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
    ll n,m,x;
    cin>>n>>m>>x;
    set<ll>a;
    a.insert(x);
    while(m--)
    {
        ll d;
        char c;
        cin>>d>>c;
        set<ll>temp;
        if(c == '0')
        {
            for(ll z:a)
            {
                ll ck = z+d;
                if(ck%n == 0)
                {
                    temp.insert(n);
                }
                else
                {
                    temp.insert(ck%n);
                }
            }
        }
        else if(c == '1')
        {
            for(ll z:a)
            {
                ll ck = z+n-d;
                if(ck%n == 0)
                {
                    temp.insert(n);
                }
                else
                {
                    temp.insert(ck%n);
                }
            }
        }
        else
        {
            for(ll z:a)
            {
                ll cnk = z+n-d;
                if(cnk%n == 0)
                {
                    temp.insert(n);
                }
                else
                {
                    temp.insert(cnk%n);
                }
                ll ck = z+d;
                if(ck%n == 0)
                {
                    temp.insert(n);
                }
                else
                {
                    temp.insert(ck%n);
                }
            }
        }
        a=temp;
    }
    cout<<a.size()<<"\n";
    for(ll z:a)
    {
        cout<<z<<" ";
    }
    cout<<"\n";
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