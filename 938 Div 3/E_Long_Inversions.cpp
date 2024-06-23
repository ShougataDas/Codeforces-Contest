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
bool ck(int m,int n,string s)
{
    string ans = "";
    for(int i = 0;i<m;i++)
    {
        if(s[i] == '0')
            ans+='1';
        else
            ans+='0';
    }
    if(m<n)
    {
        if(ans[m-1] == '0')
            ans[m-1] = '1';
        else
            ans[m-1] = '0';
        for(int i = m;i<n;i++)
        {
            if(s[i] == '0')
                ans+='1';
            else
                ans+='0';
        }

    }
   // cout<<m<<" "<<ans<<"\n";
    for(int i = 0;i<n;i++)
    {
        if(ans[i]!='1')
            return false;
    }
    return true;

}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t = "";
    for(int i = 0;i<n;i++)
        t+='1';
    if(s == t)
    {
        cout<<0<<"\n";
        return;
    }
    //int l = 1,r = n;
    int ans = 0;
    for(int z = 0;z<100;z++)
    {
        for(int i = 1;i<=n;i++)
        {
            string str = s;
            if(ck(i,n,str))
            {
                ans = i;
            }
        }
    }
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