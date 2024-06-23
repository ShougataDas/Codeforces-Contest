#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<int>dif(n-1);
    for(int i =0;i<n-1;i++)
        dif[i] = abs(a[i]-a[i+1]);
    int mx = -1;
    int count = 0;
    for(int i =0;i<n-1;i++)
    {
        if(dif[i]<=k) count++;
        else
        {
            mx = max(mx,count);
            count = 0;
        }
    }
    mx = max(mx,count);
    mx++;
    cout<<n-mx<<"\n";
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