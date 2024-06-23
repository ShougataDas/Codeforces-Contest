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
    ll n, m;
    cin >> n >> m;
    string x;
    cin >> x;
    string s;
    cin >> s;
    ll ans = 0;
    ll count = 0;
    ll n1 = n;
    ll flag = true;
    while (n <= m*80)
    {
        if(n>=m)
        {
            for (ll i = 0; i < n; i++)
            {
                string ans = x.substr(i, m);
                // cout<<ans<<"\n";
                if (ans == s)
                {
                    cout<<count<<"\n";
                    return;
                }
            }
        }
        x += x;
        count++;
        n += n;
    }
    cout<<-1<<"\n";
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