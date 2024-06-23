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
    vector<string>a(10);
    for(int i = 0;i<10;i++)
    {
        cin>>a[i];
    }
    int ans = 0;
    for(int i = 0;i<10;i++)
    {
        for(int j = 0;j<10;j++)
        {
            if(a[i][j] == 'X')
            {
                if(i == 0 || j == 0 || i == 9 || j == 9)
                    ans+=1;
                else if(i == 1 || j == 1 || i == 8 || j == 8)
                    ans+=2;
                else if( i == 2 || j == 2 || i == 7 || j == 7)
                    ans+=3;
                else if(i == 3 || j == 3 || i == 6 || j == 6)
                {
                    ans+=4;
                }
                else
                    ans+=5;
            }
        }
    }
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