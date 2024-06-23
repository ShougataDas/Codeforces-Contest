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
    int n,a,q;
    cin>>n>>a>>q;
    string s;
    cin>>s;
    if(n == a)
    {
        cout<<"YES\n";
        return;
    }
    bool flag = true;
    bool flag1 = true;
    int minus_count = 0;
    int temp = a;
    int plus_count = 0;
    int rem = n-a;
    for(int i =0;i<q;i++)
    {
        if(s[i] == '+')
        {
            a++;
            plus_count++;
            if((plus_count-minus_count) >= rem)
            {
                cout<<"YES\n";
                return;
            }
            if(a == n && minus_count == 0)
            {
                flag1 = false;
                break;
            }
            else if(a == n && minus_count!= 0)
            {
                flag = false;
                continue;
            }

        }
        else minus_count++;
         
    }
    if(flag1 == false)
    {
        cout<<"YES\n";
    }
    else if(flag == false)
    {
        cout<<"MAYBE\n";
    }
    else
    {
        cout<<"NO\n";
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