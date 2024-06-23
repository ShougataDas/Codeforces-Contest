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
    int prv_dig = -1;
    int prv_char = -1;
    for(int i = 0;i<n;i++)
    {
        if(s[i]>=90 && s[i]<=122)
        {
            int now_char = s[i] - 'a';
            if(prv_char == -1)
                prv_char = s[i]-'a';
            else if(prv_char > now_char)
            {
                no;
                return;
            }
            prv_char = now_char;
        }
        else
        {
            if(prv_char!=-1)
            {
                no;
                return;
            }
            int now_dig = s[i] - '0';
            if(prv_dig == -1)
                prv_dig = now_dig;
            else if(prv_dig > now_dig)
            {
                no;
                return;
            }
            prv_dig = now_dig;
        }
    }
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