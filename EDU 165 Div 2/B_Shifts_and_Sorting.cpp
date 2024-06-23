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
    string s;
    cin>>s;
    int z = 0;
    for(char i : s)
    {
        if(i == '0')
            z++;
    }
    int count = 0;
    int mx = 0;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] == '1')
        {
            if(i<z)
            {
                count+=(z-i);
                mx = max(mx,(z-i));
                z++;
            }
        }
    }
    count+=mx;
    cout<<count<<"\n";
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