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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << 0 << "\n";
        return;
    }
    vector<int> idx;
    int cur = a[0];
    for (int i = 1; i < n; i++)
    {
        if (cur > a[i])
        {
            idx.push_back(cur - a[i]);
        }
        else
            cur = a[i];
    }

    int age = 0;
    int sz = idx.size();
    int ans = *max_element(idx.begin(),idx.end());
    int i = 0;
    for (int val : idx)
    {
        ans += (val - age) * (sz - i);
        age = val;
        i++;
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