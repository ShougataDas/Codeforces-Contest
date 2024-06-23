#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    pair<int,int>p[n];
    for(int i =0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        p[i].first = x;
        p[i].second = y;
    }
    int mx = -1;
    vector<int>ans;
    for(int i =0;i<n;i++)
    {
        if(p[i].first<=10)
            ans.push_back(p[i].second);
    }
    for(auto val : ans)
        mx = max(mx,val);
    for(int i =0;i<n;i++)
    {
        if(p[i].second == mx)
        {
            cout<<i+1<<"\n";
            break;
        }
    }
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