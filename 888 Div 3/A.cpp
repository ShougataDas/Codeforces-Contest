#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,m,k,h;
    cin>>n>>m>>k>>h;
    vector<int>a(n);
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int count = 0;
    for(int i =0;i<n;i++)
    {
        int dif = abs(a[i]-h);
        int ans = dif/k;
        if((dif%k) == 0 && ans<m && a[i]!=h) count++;
    }
    cout<<count<<"\n";

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