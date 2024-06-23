#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(n,1);
    vector<ll>count(101);
    bool flag1 = true,flag2 = true; 
    for(ll i = 0;i<n;i++)
    {
        count[a[i]]++;
        if(count[a[i]] == 2)
        {
            if(flag1)
            {
                b[i] = 2;
                flag1 = false;
            }
            else if(flag2)
            {
                b[i] = 3;
                flag2 = false;
            }
        }
    }
    if(flag1 || flag2)
    {
        cout<<-1<<"\n";
    }
    else
    {
        for(ll i : b)
            cout<<i<<" ";
        cout<<"\n";
    }
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}