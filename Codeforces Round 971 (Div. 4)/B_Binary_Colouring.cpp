#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> ans(32, 0);
    for (int i = 0; i < 32; i++)
    {
        if (n & (1 << i))
            ans[i] = 1;
    }
    for (int i = 0; i < 32; i++)
    {
        if (ans[i] == 1)
        {
            if ((i + 1) < 32 && ans[i + 1] == 1)
            {
                ans[i] = -1;
                int idx = i + 1;
                while (idx <= 32)
                {
                    if (ans[idx] != 1)
                        break;
                    ans[idx] = 0;
                    idx++;
                }
                ans[idx] = 1;
                i = idx - 1;
            }
        }
    }
    cout << 32 << "\n";
    for (int i = 0; i < 32; i++)
        cout << ans[i] << " ";
    cout << "\n";
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

