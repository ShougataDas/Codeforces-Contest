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
    ll a,b,c;
    cin>>a>>b>>c;
    ll fr[10] = {0};
    fr[a]++;
    fr[b]++;
    fr[c]++;
    for(int i = 0;i<10;i++)
    {
        if(fr[i] == 1)
        {
            cout<<i<<"\n";
            return;
        }
    }
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