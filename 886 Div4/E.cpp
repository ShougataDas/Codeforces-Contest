#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n,c;
    cin>>n>>c;
    vector<ll>a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    ll l = 0,r = 1e9;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        ll sum = 0;
        for(int i =0;i<n;i++)
        {
            sum+=(a[i]+(2*mid)) * (a[i]+(2*mid));
            if(sum>c)
                break;
        }
        if(sum == c)
        {
            cout<<mid<<"\n";
            return;
        }
        else if(sum>c)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
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