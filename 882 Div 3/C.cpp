#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
bool cmp(pair<int,pair<int,ll>>x,pair<int,pair<int,ll>>y)
{
    if(x.second.first == y.second.first && x.second.second == y.second.second)
        return x.first<y.first;
    else if(x.second.first == y.second.first)
        return x.second.second<y.second.second;
    return x.second.first>y.second.first;

}
void solve()
{
    int n,m,h;
    cin>>n>>m>>h;
    vector<vector<int>>a;
    for(int i = 0;i<n;i++)
    {
        vector<int>t;
        for(int j =0;j<m;j++)
        {
            int x;
            cin>>x;
            t.push_back(x);
        }
           
        sort(t.begin(),t.end());
        a.push_back(t);
    }
    vector<pair<int,pair<int,ll>>>v;
    for(int i =0;i<n;i++)
    {
        int points = 0;
        ll penalty = 0;
        ll sum = 0;
        for(int j =0;j<m;j++)
        {
            sum+=a[i][j];
            if(sum<=h)
                points++;
        }
        int temp = points;
        vector<ll>p;
        for(int j = 0;j<temp;j++)
        {
            if(j == 0)
                p.push_back(a[i][j]);
            else
                p.push_back(p.back()+a[i][j]);
        }
        for(auto now : p)
        {
            penalty+=now;
        }
        v.push_back({i,{points,penalty}});
    }
    sort(v.begin(),v.end(),&cmp);
    int rank = 1;
    for(int i = 0;i<n;i++)
    {
        if(v[i].first == 0)
        {
            rank = i+1;
            break;
        }
    }
    cout<<rank<<"\n";
    

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