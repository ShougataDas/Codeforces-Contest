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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n);
    vector<int>b(m);
    map<int,int>mp1;
    map<int,int>mp2;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        if(i<m)
            mp1[a[i]]++;
       // mp1[a[i]]++;
    }
    
    
    for(int i = 0;i<m;i++)
    {
        cin>>b[i];
        mp2[b[i]]++;
    }
   // cout<<1<<"\n";
    int c1= 0,c2 =0;
    for(auto[key,v]:mp2)
    {
        if(mp1.find(key)!=mp1.end())
        {
            c1+=min(v,mp1[key]);
        }
    }
    if(c1>=k)
        c2++;
    if(n == m)
    {
        cout<<c2<<"\n";
        return;
    }
    for(int i = 0;i<n-m;i++)
    {
        if(a[i]!=a[i+m])
        {
            c1-=min(mp2[a[i]],mp1[a[i]]);
            c1-=min(mp2[a[i+m]],mp1[a[i+m]]);
            mp1[a[i]]--;
            mp1[a[i+m]]++;
            c1+=min(mp2[a[i]],mp1[a[i]]);
            c1+=min(mp2[a[i+m]],mp1[a[i+m]]);
        }
        if(c1>=k)
            c2++;
    }
    cout<<c2<<"\n";


    
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