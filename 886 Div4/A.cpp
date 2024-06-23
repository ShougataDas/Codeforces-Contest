#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)>=10 || (b+c)>=10 || (a+c)>=10) cout<<"YES\n";
    else cout<<"NO\n";

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