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
    int a[n];
    map<int,int>mp;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        mp[i+1] = a[i];
    }
    int count = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        if(a[i] == mp[mp[a[i]]])
            count = min(count,2LL);
        else
            count = min(count,3LL);
        
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