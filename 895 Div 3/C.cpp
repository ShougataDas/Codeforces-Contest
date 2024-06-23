#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
int is_prime(int n)
{
    if(n == 1) return -1;
    //if(n == 2) return -1;
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i == 0)
            return i;
    }
    return -1;

}

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a<b)
    {
        if(a<=2)
        {
            if(b>3)
            {
                cout<<2<<" "<<2<<"\n";
                return;
            }
            else
            {
                cout<<-1<<"\n";
                return;
            }
        }
        int temp = a/2 +(a%2);
        if(temp == 1)
        {
            cout<<-1<<"\n";
            return;
        }
        cout<<temp<<" "<<temp<<"\n";
    }
    else
    {
        int ans = is_prime(a);
        if(ans == -1)
        {
            cout<<ans<<"\n";
            return;
        }
        cout<<ans<<" "<<(a-ans)<<"\n";

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