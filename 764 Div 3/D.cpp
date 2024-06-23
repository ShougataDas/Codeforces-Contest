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
    int fr[26] = {0};
    for(int i = 0;i<n;i++)
        fr[s[i]-'a']++;
    int pair_count = 0;
    int odd_count = 0;
    for(int i = 0;i<26;i++)
    {
        if(fr[i]%2 == 0)
        {
            pair_count+=(fr[i]/2);
        }
        else
        {
            int x = fr[i]/2;
            int temp = fr[i]%2;
            pair_count+=x;
            odd_count+=temp;
        }
    }
    int ans = pair_count/k;
    ans*=2;
    int extra = ((pair_count%k)*2)+odd_count;
    if(extra>=k)
        ans++;
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