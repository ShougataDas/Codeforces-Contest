#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    vector<string>a(8);
    for(int i =0;i<8;i++)
    {
        cin>>a[i];
    }
    string ans;
    for(int i =0;i<8;i++)
    {
        for(int j =0;j<8;j++)
        {
            if(a[i][j]!='.')
                ans+=a[i][j];
        }
    }
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