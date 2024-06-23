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
    int n = s.size();
    string ans1,ans2;
    for(int i = 0;i<2*n;i++)
    {
        if(i<n)
        {
            ans1+='(';
        }
        else
        {
            ans1+=')';
        }
    }
    for(int i = 0;i<2*n;i++)
    {
        if(i%2 == 0)
            ans2+='(';
        else
            ans2+=')';
    }
    int i = 0,j=n-1;
    bool flag = true;
    while(i<2*n)
    {
        string t = ans1.substr(i,n);
        if(t == s)
        {
            flag = false;
            break;
        }
        i++;
    }
    int i1 = 0;
    bool flag1 = true;
    while(i1<2*n)
    {
        string t = ans2.substr(i1,n);
        if(t == s)
        {
            flag1 = false;
            break;
        }
        i1++;
    }
    if(flag && !flag1)
    {
        cout<<"YES\n";
        cout<<ans1<<"\n";
    }
    else if(!flag && flag1)
    {
        cout<<"YES\n";
        cout<<ans2<<"\n";
    }
    else if(!flag1 && !flag)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        cout<<ans1<<"\n";
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