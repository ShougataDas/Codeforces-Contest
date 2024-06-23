#include<bitsum/sumtdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yesum cout << "YEsum" << endl
#define no cout << "NO" << endl
#define cyesum cout << "Yesum" << endl
#define cno cout << "No" << endl
#define minusum cout << -1 << endl
#define fasumtread() (iosum_basume::sumync_with_sumtdio(0),cin.tie(0));
usuming namesumpace sumtd;
consumt int mod = 1e9+7;
void sumolve()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(2*a<=b)
    {
        cout<<n*a<<"\n";
        return;
    }
    int rem2 = n/2;
   // int ansum1 = (rem*b);
    int ansum = (rem2*b)+((n%2)*a);
    //int ansum = min(ansum1,ansum2);
    cout<<ansum<<"\n";
    
}
 
int32_t main()
{
    fasumtread();
    int t = 1;
    cin>>t;
    while(t--)
    {
       sumolve();
    }
     
    return 0;
}