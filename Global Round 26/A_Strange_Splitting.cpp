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
    vector<int>a(n);
    map<int,int>mp;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    string ans;
    for(int i = 0;i<n;i++)
    {
        if(mp[a[i]] == n)
        {
            no;
            return;
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(a[i] == a[0] || a[i] == a[n-1])
        {
            ans+='R';
        }
        else
            ans+='B';
    }
    if(mp[a[0]] + mp[a[n-1]] == n)
    {
        if(mp[a[n-1]] > 1)
        {
            ans[n-1] = 'B';
        }
        else
        {
            ans[0] = 'B';
        }

    }
    yes;
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