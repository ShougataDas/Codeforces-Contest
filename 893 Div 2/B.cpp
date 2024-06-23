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
    int n,m,d;
    cin>>n>>m>>d;
    vector<int>a(m);
    for(int i =0;i<m;i++)
        cin>>a[i];
    int c = 0;
    vector<int>ans;
    int cord = a[0];
    int j = 0;
    for(int i =0;i<n;i++)
    {
        if(i == 0)
        {
            ans.push_back(1);
            continue;
        }
        if(i == cord-1)
        {
            j++;
            ans.push_back(1);
            if(j!=m)
                cord = a[j];
            c = 0;
            continue; 
        }
        c++;
        if(c >= d)
        {
            ans.push_back(1);
            c = 0;
            continue;
        }
        ans.push_back(0);
    }
    int num = 0;
    for(int i =0;i<n;i++)
    {
        if(ans[i] == 1) num++;
    }
    int count = 0;
    int no = 0;
    for(int i = 0;i<n;i++)
    {
        if(ans[i] == 1)
        {
            no++;
        }
        else
        {
            if(no > 0)
                count+=((no*(no-1))/2);
            no = 0;
        }
        
    }
    if(no>0)
    {
        count+=(no*(no-1))/2;
    }
    cout<<num-1<<" "<<count<<"\n";
    
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