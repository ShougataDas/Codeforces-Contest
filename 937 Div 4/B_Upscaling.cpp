#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
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
    for(ll i = 0;i<n;i++)
    {
        ll x = 2;
        char f = '#';
        char s = '.';
        if(i%2)
        {
            f= '.';
            s='#';
        }
        while(x--)
        {
            for(ll j = 0;j<n;j++)
            {
                for(ll k = 0;k<2;k++)
                {
                    if(j%2)
                        cout<<s;
                    else
                        cout<<f;
                }
            }
        cout<<"\n";
        }
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