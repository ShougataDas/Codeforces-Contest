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
    int l,r;
    cin>>l>>r;
    int count = 0;
    for(int i = l;i<=r;i++)
    {
        int x = i;
        int y = i+1;
        int z = i+2;

        if(__gcd(x,y) == 1 && __gcd(y,z) == 1 && __gcd(x,z) == 1 && x<=r && y<=r && z<=r)
        {
            count++;
            i = z;
        }
    }
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