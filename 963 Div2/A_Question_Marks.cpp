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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a = 0,b = 0,c = 0, d = 0;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] == 'A')
        {
            if(a<n)
                a++;
        }
        else if(s[i] == 'B')
        {
            if(b<n)
                b++;
        }
        else if(s[i] == 'C')
        {
            if(c<n)
                c++;
        }
        else if(s[i] == 'D')
        {
            if(d<n)
                d++;
        }
    }
    cout<<a+b+c+d<<"\n";
    
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