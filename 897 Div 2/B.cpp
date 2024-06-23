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
    string s;
    cin>>s;
    int l,r;
    bool flag = false;
    for(int i = 0;i<n;i++)
    {
        if(s[i] == '0')
        {
            if(!flag)
            {
                l = i+1;
                flag = true;

            } 
            else r = i+1;
            //continue;
        }
    }
    for(int i = 0;i<=n;i++)
    {
        if(i >= l && i <= r)
            cout<<1;
        else cout<<0;
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