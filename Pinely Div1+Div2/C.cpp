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
    ll n,k;
    cin>>n>>k;
    k = k%(n+1);
    vector<ll>a(n);
    vector<bool>visited(n+1,false);
    for(ll i =0;i<n;i++)
    {
        cin>>a[i];
        visited[a[i]] = true;
    }
    ll miss = -1;
    for(ll i = 0;i<=n;i++) 
    {
        if(!visited[i])
            miss = i;
    }
    deque<ll>dq(a.begin(),a.end());
    for(ll i = 0;i<k;i++)
    {
        dq.push_front(miss);
        miss = dq.back();
        dq.pop_back();
    }
    for(ll i = 0;i<dq.size();i++)
        cout<<dq[i]<<" ";
    cout<<"\n";
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