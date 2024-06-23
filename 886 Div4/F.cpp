#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>fr(n+1,0);
    vector<int>mx(n+1,0);
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<=n)
            fr[x]++;
    }
    for(int i =1;i<=n;i++)
    {
        for(int j = i;j<=n;j+=i) mx[j]+=fr[i];

    }
    int ans = *max_element(mx.begin(),mx.end());
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
