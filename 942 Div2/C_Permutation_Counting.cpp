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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i = 0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    if(n == 1)
    {
        a[0]+=(k/n);
        cout<<(k%n)+(a[0]*n)-(n-1)<<"\n";
        return;
    }
    bool flag = false;
    int ans = 0;
    int idx = 0;
    for(int i = 0;i<n-1;i++)
    {
        int ekhon = (a[i+1]-a[i])*(i+1);
        if(k>=ekhon)
        {
            k-=ekhon;
            a[i] = a[i+1];
            ans = a[i];
            idx = i+1;
        }
        else
        {
            a[i]+=(k/(i+1));
            k = k%(i+1);
            ans = a[i];
            idx = i+1;
            flag = true;
            break;
        }
    }
    if(flag)
        cout<<k+(ans*n)-idx+1<<"\n";
    else
    {
        ans+=(k/n);
        cout<<(k%n)+(n*ans)-(n-1)<<"\n";
    }
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