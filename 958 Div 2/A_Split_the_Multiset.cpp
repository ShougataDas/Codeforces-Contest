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
void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }
    int count = 0;
    multiset<int> mt;
    mt.insert(n);
    while (mt.size() < n)
    {
        int cur = *mt.rbegin();
        mt.erase(mt.find(cur));
        int mini = min(k, n);
        for (int i = 0; i < mini - 1; i++)
        {
            mt.insert(1);
        }
        // cout<<cur<<" ";
        mt.insert(cur - k + 1);
        count++;
        // cout<<count<<"\n";
    }
    cout << count << "\n";
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
