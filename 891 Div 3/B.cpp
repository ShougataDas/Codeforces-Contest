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
    string t;
    cin>>t;
    int n = t.size();
    vector<int>ans;
    bool flag = true;
    int rem = 0;
    for(int i = n-1;i>=0;i--)
    {
        int x = t[i] -'0';
        if(x == 0)
        {
            ans.push_back(0);
            continue;
        }
        if(x == 9)
        {
            x = 0;
            ans.push_back(x);
            rem = 1;
            continue;
        }
        x+=rem;
        if(x<5)
        {
            ans.push_back(x);
            rem = 0;
        }
        else
        {
            x = 0;
            ans.push_back(x);
            rem = 1;
        }

    }
    if(rem == 1)
    {
        ans.push_back(1);
        reverse(ans.begin(),ans.end());
        for(auto val : ans)
        {
            cout<<val;
        }
        cout<<"\n";
    }
    else
    {
        reverse(ans.begin(),ans.end());
        for(auto val : ans)
        {
            cout<<val;
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