#include<bits/stdc++.h>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n-1);
    for(ll i = 0;i<n-1;i++) cin>>a[i];
    ll sum = (n*(n+1))/2;
    if(a[n-2]>sum)
    {
        cout<<"NO\n";
        return;
    }
    else
    {
        set<ll>s;
        for(ll i = 1;i<=n;i++) s.insert(i);
        ll val = -1;
        for(ll i = 1;i<n-1;i++)
        {
            ll dif = a[i] - a[i-1];
            if(s.find(dif) == s.end())
                val = dif;
            else 
                s.erase(dif);
        }
        if(sum == a[n-2])
        {
            if(s.size() == 2)
            {
                ll cur_sum = 0;
                for(auto x : s)
                 cur_sum+=x;
                if(cur_sum == a[0]) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else if(s.size()>3)
                cout<<"NO\n";
            else if(s.size() == 3)
            {
                if(s.find(a[0]) == s.end())
                    cout<<"NO\n";
                else
                {
                    s.erase(a[0]);
                    ll cur_sum = 0;
                    for(auto x : s)
                        cur_sum+=x;
                    if(cur_sum == val) cout<<"YES\n";
                    else cout<<"NO\n";
                }
            }
        }
        else
        {
            if(s.find(a[0]) == s.end())
                cout<<"NO\n";
            else if(s.size()>2) cout<<"NO\n";
            else cout<<"YES\n";

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