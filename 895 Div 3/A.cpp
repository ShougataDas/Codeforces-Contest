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
    int a,b,c;
    cin>>a>>b>>c;
    int count = 0;
    if(a == b)
    {
        cout<<0<<"\n";
        return;
    }
    if(b>a)
        swap(a,b);
    while(a!=b)
    {
        int dif = a-b;
        if(dif < 0) break;
        if(dif>=c)
        {
            a-=c;
            b+=c;
            count++;
        }
        else
        {
            a-=dif;
            b+=dif;
            count++;
            break;
        }

    }
    cout<<count<<"\n";
    
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