#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]] = i;
    }
    vector<int>v(n);
    v = a;
    sort(v.begin(),v.end());
    bool flag = true;
    for(int i=0;i<n;i++)
    {
        int idx = mp[v[i]];
        if((a[idx]%2) != (a[i]%2))
        {
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES\n";
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