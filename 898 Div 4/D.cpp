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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int black = 0;
    for(int i = 0;i<n;i++)
    {
        if(s[i] == 'B') black++;
    }
    vector<int>ans(black);
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        if(s[i] == 'B')
        {
            ans[cnt] = i+1;
            cnt++;
        }
    }
    if(black == 0)
    {
        cout<<0<<"\n";
        return;
    }
    int count = 1;
    int i = 0 ,j = 1;
    while(j<black)
    {
        int dif = ans[j] - ans[i];
        if(dif < k)
        {
            j++;
            continue;
        }
        count++;
        i = j;
        j++;

    }
    cout<<count<<"\n";

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