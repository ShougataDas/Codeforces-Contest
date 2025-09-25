#ifndef ONLINE_JUDGE
#include"debugger.h"
#else
#define dbg(...)
#endif
#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9+7;
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int>left(n);
    vector<int>right(n);

    for (int i = 0; i < n; i++)
    {
        cin >> left[i];   
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> right[i];   
    }
    
    int ans = 0;
    multiset<int>s;
    for (int i = 0; i < n; i++)
    {
        ans+= max(left[i],right[i]);  
        s.insert(min(left[i],right[i])); 
    }
    while(k > 1)
    {
        ans+=*s.rbegin();
        s.erase(s.find(*s.rbegin()));
        k--;
    }
    cout << ans + 1 << "\n";
}
 
int32_t main()
{
    fastread();
    int t = 1;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}