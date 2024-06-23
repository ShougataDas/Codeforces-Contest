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
    for(int i =0;i<n;i++) cin>>a[i];
    if(n == 1)
    {
        cout<<"NO\n";
        return;
    }
    if(n == 2)
    {
        if(a[0] == 2 && a[1] == 1)
        {
            cout<<"YES\n";
            return;
        }
        cout<<"NO\n";
        return;
    }
    vector<int>dif(n-1);
    for(int i =1;i<n;i++)
    {
        dif[i-1] = abs(a[i]-a[i-1]);
    }
    bool flag = true;
    for(int i = 0;i<n-2;i++)
    {
        if(abs(dif[i]-dif[i+1]) == 1)
        {
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
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