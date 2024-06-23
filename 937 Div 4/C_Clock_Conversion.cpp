#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
void solve()
{
    string s;
    cin>>s;
    if(s == "00:00")
    {
        cout<<"12:00 AM\n";
        return;
    }
    if(s == "12:00")
    {
        cout<<"12:00 PM\n";
        return;
    }
    int a = s[0] -'0';
    int b = s[1]-'0';
    int c = s[3] - '0';
    int d = s[4] -'0';
    int h = (a*10)+b;
  //  int m = (c*10)+d;
  string ans = "";
  if(h<12)
    ans = "AM";
else
    ans = "PM";
    h%=12;
    if(h == 0)
    {
        cout<<"12";
        cout<<s[2]<<s[3]<<s[4]<<" ";
    }
    else
    {
        if(h<10)
            cout<<0;
        cout<<h;
        cout<<s[2]<<s[3]<<s[4]<<" ";
    }
    cout<<ans<<"\n";
    
}
 
int main()
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