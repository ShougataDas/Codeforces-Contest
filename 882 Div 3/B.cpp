#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    vector<string>a(3);
    for(int i = 0;i<3;i++)
    {
        cin>>a[i];
    }
    bool flag = true;
    for(int i =0;i<3;i++)
    {
        if(a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0]!= '.')
        {
            cout<<a[i][0]<<"\n";
            flag = false;
            break;
        }
        if(a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '.')
        {
            cout<<a[0][i]<<"\n";
            flag = false;
            break;
        }
        if(a[0][0] == a[1][1] && a[1][1] == a[2][2]  && a[0][0]!='.')
        {
            cout<<a[1][1]<<"\n";
            flag = false;
            break;
        }
        if(a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2]!= '.')
        {
            cout<<a[0][2]<<"\n";
            flag = false;
            break;
        }
    }
    if(flag) cout<<"DRAW\n";
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