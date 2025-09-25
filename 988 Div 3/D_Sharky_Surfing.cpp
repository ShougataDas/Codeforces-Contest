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
    int n, m, l;
    cin >> n >> m >> l;
    vector<pii> hardle(n);
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        hardle[i] = {x, y};
        mx = max(mx, (y - x + 1));
    }
    vector<int> point(m);
    int sum = 1;
    int h = 0;
    map<int, multiset<int>> mp;
    for (int i = 0; i < m; i++)
    {
        int x, v;
        cin >> x >> v;
        point[i] = x;
        if (x < hardle[h].first)
        {
            mp[hardle[h].first].insert(v);
        }
        else
        {
            while (h < n)
            {
                if(x < hardle[h].first)
                {
                    mp[hardle[h].first].insert(v);
                    break;
                }
                h++;
            }
        }
        sum += v;
    }
    if (sum <= mx)
    {
        minus;
        return;
    }
    int count = 1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int size = hardle[i].second - hardle[i].first + 1;
        if (mp[hardle[i].first].size() == 0 && count <= size)
        {
            minus;
            return;
        }
        while (count <= size)
        {
            if(mp[hardle[i].first].size() == 0)
            {
                if(count <= size)
                {
                    minus;
                    return;
                }
                else
                    break;
            }
            count += *mp[hardle[i].first].rbegin();
            mp[hardle[i].first].erase(*mp[hardle[i].first].rbegin());
            ans++;
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