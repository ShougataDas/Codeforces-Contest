#ifndef ONLINE_JUDGE
#include"debugger.h"
#else
#define dbg(...)
#endif
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
    cin >> n;
    string s;
    cin >> s;
    if(n == 2)
    {
        if(s[0] == 'A')
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
        return;
    }
    vector<int>a,b;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
        {
            a.push_back(i);
        }
        else
        {
            b.push_back(i);
        }
    }
    if(b.size() == 1)
    {
        cout << "Alice\n";
        return;
    }
    if(a.size() == 1)
    {
        cout << "Bob\n";
        return;
    }
    if((s[0] == 'A' && s[n-1] == 'A') || (s[n-1] == 'A' && s[n-2] == 'A'))
    {
        cout << "Alice\n";
    }
    else
    {
        cout << "Bob\n";
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