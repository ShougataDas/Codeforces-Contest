#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int>f(n+1,0);
    for (int i = 0; i < n; i++)
        cin >> a[i],f[a[i]]++;
    
    vector<int>freq;
    for(int i = 0;i<=n;i++)
    {
        if(f[i] > 0)
            freq.push_back(f[i]);
    }
    sort(freq.begin(),freq.end(),greater<int>());
    int mx = n;
    int op = 0;
    for(int i = 0;i<freq.size();i++)
    {
        if(freq[i] <= mx)
        {
            op++;
            mx-=freq[i];
        }
        else
            break;
    }
    cout<<op<<"\n";
    fill(f.begin(),f.end(),0);
   
}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}