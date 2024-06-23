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
    vector<int>a(n);
    int count = 0;
    for(int i = 0;i<n;i++) 
    {
        cin>>a[i];
        if(a[i] == 0) count++;
    }
    if(count == n)
    {
        cout<<0<<"\n";
        return;
    }
    int temp = a[0];
    for(int i = 1;i<n;i++)
    {
        temp^=a[i];
    }
    if(temp == 0)
    {
        cout<<1<<"\n";
        cout<<1<<" "<<n<<"\n";
    }
    else
    {
       if(n%2 == 0)
       {
            cout<<2<<"\n";
            cout<<1<<" "<<n<<"\n";
            cout<<1<<" "<<n<<"\n";
       }
       else
       {
            int temp1 = a[0];
            for(int i = 1;i<n-1;i++)
            {
                temp1^=a[i];
            }
            if(temp1 == 0)
            {
                cout<<3<<"\n";
                cout<<1<<" "<<n-1<<"\n";
                cout<<n-1<<" "<<n<<"\n";
                cout<<n-1<<" "<<n<<"\n";
                return;

            }
            if(a[n-1] == 0)
            {
                cout<<2<<"\n";
                cout<<1<<" "<<n-1<<"\n";
                cout<<1<<" "<<n-1<<"\n";
            }
            else
            {
                cout<<4<<"\n";
                cout<<1<<" "<<n-1<<"\n";
                cout<<1<<" "<<n-1<<"\n";
                cout<<n-1<<" "<<n<<"\n";
                cout<<n-1<<" "<<n<<"\n";
            }
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