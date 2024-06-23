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
    char s[3][3];
    int fr[3]={0};
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cin>>s[i][j];
            fr[s[i][j]-'A']++;
        }
    }
    for(int i = 0;i<3;i++)
    {
        if(fr[i]<3)
        {
            cout<<char(i+65)<<"\n";
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