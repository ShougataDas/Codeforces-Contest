#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n],b[n];
    pair<int,int>p[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
        p[i] = {a[i],b[i]};
    }
    int count = 0;
    for(int i  =0;i<n;i++)
    {
        if(p[i].first>p[i].second) count++;
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