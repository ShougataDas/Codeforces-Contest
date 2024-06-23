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
    string s;
    cin>>s;
    ll count1 = 0,count2 = 0;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] == '0')
            count1++;
        else
            count2++;
    }
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] == '0')
        {
            if(count2 == 0)
                break;
            count2--;
        }
        else
        {
            if(count1 == 0)
                break;
            count1--;
        }
    }
    cout<<count1+count2<<"\n";
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