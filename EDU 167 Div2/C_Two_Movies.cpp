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
    vector<int>b(n);

    for(int i = 0;i<n;i++)
        cin>>a[i];
    
    for(int i = 0;i<n;i++)
        cin>>b[i];

    int one = 0,two = 0;
    int lose = 0,gain = 0;

    for(int i = 0;i<n;i++)
    {
        if(a[i] == b[i])
        {
            if(b[i] == -1)
                lose--;
            else if(b[i] == 1)
                gain++;
        }
        else if(a[i] > b[i])
            one+=a[i];
        else
            two+=b[i];
    }
    int ans = gain;
    if(one > two)
        swap(one,two);
    if((two-one) >= gain)
    {
        one+=gain;
    }
    else
    {
        int tem = min(two-one,ans);
        one+=tem;
        ans-=tem;
        int h = ans/2;
        ans-=h;
        one+=max(h,ans);
        two +=min(h,ans);
    }
    // cout<<gain<<" "<<lose<<"\n";
    // cout<<one<<" "<<two<<"\n";

    ans = lose;
     if(one > two)
        swap(one,two);
    int tem = max(one-two,ans);
    two+=tem;
    ans-=tem;
   // cout<<ans<<"\n";
    int h = ans/2;
    //cout<<h<<" ";
    ans-=h;
    one+=max(h,ans);
    two+=min(h,ans);

    cout<<min(one,two)<<"\n";

    
    
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