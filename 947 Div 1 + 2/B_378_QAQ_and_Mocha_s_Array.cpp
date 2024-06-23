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
    vector<int>a(n);
    int g = 0;
    map<int,int>mp;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a.begin(),a.end());
    int prv = 0;
    vector<int>ans;
    for(int i = 0;i<n;i++)
    {
        prv = g;
        g = __gcd(g,a[i]);
        if(mp[g] == 0)
        {
            g = prv;
            ans.push_back(a[i]);
        }
    }
    if(ans.empty())
    {
        if(mp[g] == 0)
            cno;
        else
            cyes;
        return;
    }
    int g1 = 0;
    for(int val : ans)
    {
        g1 = __gcd(g1,val);
    }
    if(mp[g1] == 0 || mp[g] == 0)
        cno;
    else 
        cyes;

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