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
    string s;
    cin >> s;
    set<char>st;
    for(char c : s)
        st.insert(c);
    if(n == 1 || st.size() == 1)
    {
        no;
        return;
    }
    if(s[0] < s[n-1])
    {
        yes;
        return;
    }
    int l = 0, r = n-1;
    int c = 0,c1 = 0;
    while(l < r)
    {
        if(s[l] > s[r])
        {
           if(!k)
           {
                no;
                return;
           }
        }
        else if(s[r] > s[l])
        {
            yes;
            return;
        }
      
        l++;
        r--;
    }
    if(!k)
        no;
    else
        yes;
    
    
    
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