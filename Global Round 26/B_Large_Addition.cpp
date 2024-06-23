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
bool check(int number)
{
    while(number > 0)
    {
        if((number%10) < 5)
            return false;
        number/=10;
    }
    return true;
}
void solve()
{
    string s;
    cin>>s;
    int sum = 0;
    int i = 0;
    for(char c : s)
    {
        if(c == '0' && i < s.size()-1)
        {
            no;
            return;
        }
        sum+= c-'0';
        i++;
    }
    int n = s.size();
    if(s.back() == '9' || sum == 35 || s[0]!= '1' || (n%10 == 0))
        no;
    else
        yes;
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