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
    int k;
    cin >> k;
    vector<int> a(k);
    map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < k; i++)
    {
        if ((k - 2) % a[i] == 0)
        {
            int next = (k - 2) / a[i];
            if (next == a[i])
            {
                if (mp[a[i]] >= 2)
                {
                    cout << a[i] << " " << a[i] << "\n";
                    return;
                }
                else
                    continue;
            }
            if(mp[next])
            {
                cout << a[i] << " " << next << "\n";
                return;

            }
        }
    }
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