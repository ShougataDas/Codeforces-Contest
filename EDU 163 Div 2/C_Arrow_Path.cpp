#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long
#define pii pair<ll , ll >
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int  mod = 1e9 + 7;
void solve()
{
    ll n;
    cin >> n;
    vector<string>a(2);
    for(ll  i =0;i<2;i++)
        cin>>a[i];

    bool vis[2][n];

    vis[0][n - 1] = false;
    vis[1][n - 1] = true;
    vis[1][n - 2] = false;
    if (a[1][n - 2] == '>')
    {
        vis[0][n - 2] = true;
    }
    else
    {
        vis[0][n - 2] = false;
    }
    for (ll i = n - 3; i >= 0; i--)
    {
        vis[0][i] = false;

        if (vis[0][i + 2])
        {
            if(a[0][i+1] == '>')
                vis[0][i] = true;
        }
        if (vis[1][i + 1] == true)
        {
            if(a[1][i] == '>')
                vis[0][i] = true;
        }

        vis[1][i] = false;
        if (vis[1][i + 2] == true)
        {
            if(a[1][i + 1] == '>')
                vis[1][i] = true;
        }
        if (vis[0][i + 1] == true)
        {
            if(a[0][i] == '>')
                vis[1][i] = true;
        }
    }
    if (vis[0][0])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}