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
    string s;
    cin >> s;
    int n = s.size();
    string ans;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i] == 'u' && s[i+1] == 's' && i == n-2)
        {
            ans.push_back('i');
            i++;
        }
        else
            ans.push_back(s[i]);
    }
    cout << ans << "\n";
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