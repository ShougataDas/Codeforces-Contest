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
    set<int>s;
    for(int i = 1;i<=n;i++)
    {
        s.insert(i);
    } 
    vector<int>a;
    for(int i = 1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(s.count(x))
        {
            s.erase(x);
        }
        else
            a.push_back(x);
    }
    for(auto val : a)
    {
        while(val>0)
        {
            val/=2;
            if(s.count(val))
            {
                s.erase(val);
                break;
            }
        }
    }
    if(s.size() == 0) cout<<"YES\n";
    else cout<<"NO\n";

    
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