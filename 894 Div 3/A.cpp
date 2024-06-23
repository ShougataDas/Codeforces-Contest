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
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    for(int i =0;i<n;i++)
        cin>>a[i];
    string ans;
    char ch = 'v';
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(a[j][i] == ch)
            {
                if(ans.size() == 4) continue;
                ans+=ch;
                if(ans.size() == 1)
                    ch = 'i';
                else if(ans.size() == 2)
                    ch = 'k';
                else if(ans.size() == 3)
                    ch = 'a';
                break;
            }
        }
    }
    if(ans.size() == 4)
    {
        cout<<"YES\n";
        // cout<<ans;
    }
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