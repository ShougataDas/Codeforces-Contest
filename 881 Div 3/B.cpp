#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    int i = 0,j = n-1;
    ll count = 0;
    bool flag = true;
    while(i<=j)
    {
        if(flag == true)
        {
            if(a[i]>=0)
            {
                i++;
                continue;
            } 
            if(a[j]>=0)
            {
                j--;
                continue;
            }
        }
        else
        {
            if(a[i]<=0)
            {
                i++;
                continue;
            } 
            if(a[j]<=0)
            {
                j--;
                continue;
            }
        }
        if(flag) flag = false;
        else flag = true;        
        count++;
        i++;
        j--;
    }
    ll sum = 0;
    for(int i = 0;i<n;i++) sum+=abs(a[i]);
    cout<<sum<<" "<<count<<"\n";
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