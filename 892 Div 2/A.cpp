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
    sort(a.begin(),a.end());
    vector<int>b;
    vector<int>c;
    int x = a[n-1];
    c.push_back(x);
    for(int i =n-2;i>=0;i--)
    {
        if(a[i]%x==0)
        {
            c.push_back(a[i]);
        }
        else
        {
            b.push_back(a[i]);
        }
    }
    if(b.empty() || c.empty())
        cout<<-1<<"\n";
    else
    {
        cout<<b.size()<<" "<<c.size()<<"\n";
        for(auto val : b)
            cout<<val<<" ";
        cout<<"\n";
        for(auto val : c)
        {
            cout<<val<<" ";
        }
        cout<<"\n";
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