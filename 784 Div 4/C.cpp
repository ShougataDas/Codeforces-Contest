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
    vector<int>odd;
    vector<int>even;
    for(int i = 0;i<n;i++) {
        cin>>a[i];
        if(i%2 == 0)
            odd.push_back(a[i]);
        else even.push_back(a[i]);    
    }
    int x = odd[0];
 
    bool flag1 = true;
    for(int i = 1;i<odd.size();i++)
    {
        if(odd[i]%2 != x%2)
        {
            flag1 = false;
            break;
        }
    }
    int y = even[0];

    bool flag2 = true;
     for(int i = 1;i<even.size();i++)
    {
        if(even[i]%2 != y%2)
        {
            flag2 = false;
            break;
        }
    }

    if(flag1 == false || flag2 == false)
        cout<<"NO\n";
    else
        cout<<"YES\n";
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