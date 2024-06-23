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
    vector<int>p(n);
    set<int>q;
    for(int i = 0;i<=n;i++)
        q.insert(i);
    for(int i = 0;i<n;i++)
    {
        if(a[i] >= 0)
        {
            p[i] = *q.begin();
            q.erase(q.begin());
        }
        else
        {
            p[i] = *q.begin() - a[i];
            q.erase(p[i]);
        }
    }
    for(int x:p)
        cout<<x<<" ";
    cout<<"\n";
    
}
 
int32_t main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}