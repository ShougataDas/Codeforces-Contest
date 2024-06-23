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
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0;i<n;i++)
        cin>>a[i];
    for(int i = 0;i<n;i++)
        cin>>b[i];
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        if(b[i] < a[i])
        {
            count++;
            a.pop_back();
            a.push_back(b[i]);
            sort(a.begin(),a.end());

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