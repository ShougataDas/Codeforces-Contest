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
    vector<int> bit(65, 0);
    int tem = 1;
    int count = 0;
    while (tem <= n)
    {
        tem *= 2;
        count++;
    }
    for (int i = 0; i <= count; i++)
    {
        if (n & (1LL << i))
            bit[i]++;
    }
    // for(int i = 0;i<65;i++)
    // {
    //     if(bit[i] == 1)
    //         cout<<i<<" ";

    // }
    vector<int> s;
    s.push_back(n);
    for (int i = 0; i <= 64; i++)
    {
        if (bit[i] == 1)
        {
            int cur = (1LL << i);
            int dif = n - cur;
            if (n != cur)
                s.push_back(dif);
        }
    }
    sort(s.begin(), s.end());
    cout << s.size() << "\n";
    for (int x : s)
        cout << x << " ";
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