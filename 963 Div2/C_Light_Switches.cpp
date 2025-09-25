#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;
int n, k;
vector<int> a;
bool check(int mid)
{
    bool on = true;
    for (int i = 0; i < n; i++)
    {
        int rem = mid - a[i];
        if ((rem / k) % 2 == 1)
        {
            on = false;
            break;
        }
    }
    return on;
}
void solve()
{
    // int n,k;
    cin >> n >> k;
    a.resize(n);
    int mn = LLONG_MAX;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn,a[i]);
        mx = max(mx,a[i]);
    }
    int ans = -1;
    for(int i = mx;i<=mx+k;i++)
    {
        if(check(i))
        {
            cout<<i<<"\n";
            return;
        }
    }
    cout << ans << "\n";
}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}