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
    for(int i = 0;i<n;i++)
        cin>>a[i];
    //sort(a.begin(),a.end());
    int count = 0;
    int sum = 0;
    int mx = 0;
    for(int i = 0;i<n;i++)
    {
        mx = max(mx,a[i]);
        sum+=a[i];
        if(sum-mx == mx)
            count++;
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