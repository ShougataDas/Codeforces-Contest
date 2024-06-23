#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
int check(char c)
{
    if(c == 'a' || c == 'e')
        return 1;
    return 0;
}
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
   // reverse(s.begin(),s.end());
    while(!s.empty())
    {
        ll x;
        if(check(s.back()) == 1)
            x = 2;
        else x = 3;
        while(x--)
        {
            ans.push_back(s.back());
            s.pop_back();
        }
        ans.push_back('.');
    }
    ans.pop_back();
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
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