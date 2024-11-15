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
    if (n & 1)
    {
        if (n < 27)
        {
            minus;
            return;
        }
        else
        {
            vector<int> ans(n + 1, 0);
            ans[1] = 1;
            ans[10] = 1;
            ans[26] = 1;
            ans[23] = 12;
            ans[27] = 12;
            int count = 2;
            int cnt = 0;
            for (int i = 2; i <= n; i++)
            {
                if (ans[i] != 0)
                    continue;
                if (count == 12)
                    count++;
                ans[i] = count;
                if (cnt == 0)
                {
                    cnt++;
                }
                else
                {
                    count++;
                    cnt = 0;
                }
            }
            for (int i = 1; i <= n; i++)
                cout << ans[i] << " ";
            cout << "\n";
            return;
        }
    }
    else
    {
        for (int i = 1; i <= (n / 2); i++)
            cout << i << " " << i << " ";
    }
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