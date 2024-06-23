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
    for(int i = 0;i<n;i++)
        cin>>a[i];
    if(n < 3)
    {
        cout<<min(a[0],a[1])<<"\n";
        return;
    }
    int i = 0;
    int j = 0;
    int mx = LLONG_MIN;
    while(j<n)
    {
        if(j<2)
        {
            j++;
            continue;
        }
        vector<int>ans(3);
        ans[0] = a[i];
        ans[1] = a[i+1];
        ans[2] = a[i+2];
        sort(ans.begin(),ans.end());
        mx = max(mx,ans[1]);
        i++;
        j++;
    }
    cout<<mx<<"\n";
    
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