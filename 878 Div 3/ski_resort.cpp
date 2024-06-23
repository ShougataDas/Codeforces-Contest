#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    ll i = 0,j=0,cnt=0;
    multiset<ll>m;
    vector<ll>ans;
    while(j<n)
    {
        m.insert(a[j]);
        if(j<k-1) j++;
        else
        {
            ll maxi = *m.rbegin();
            if(maxi<=q) cnt++;
            else
            {
                ans.push_back(cnt);
                cnt = 0;
            }
            m.erase(m.find(a[i]));
            i++;
            j++;
        }
    }
    ans.push_back(cnt);
    ll ways = 0;
    for(auto val : ans)
    {
        ways+= (val*(val+1))/2;
    }
    cout<<ways<<"\n";
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