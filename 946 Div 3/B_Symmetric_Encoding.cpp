#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9+7;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st(s.begin(),s.end());
    string t;
    for(char ch : st)
        t+=ch;
    map<char,char>mp;
    int sz = st.size();
    for(int i = 0;i<sz;i++)
        mp[t[i]] = t[sz-i-1];
    string ans;
    for(char ch : s)
        ans+=(mp[ch]);
    cout<<ans<<"\n";
    
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