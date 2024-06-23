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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<pii, int> duo1, duo2, duo3;
    map<vector<int>, int> trio1, trio2, trio3;
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int cur1 = a[i];
        int cur2 = a[i + 1];
        int cur3 = a[i + 2];

        duo1[{cur1, cur2}]++;
        duo2[{cur2, cur3}]++;
        duo3[{cur1, cur3}]++;

        trio1[{cur1, cur2, cur3}]++;
        trio2[{cur2, cur3, cur1}]++;
        trio3[{cur1, cur3, cur2}]++;

        count += (duo1[{cur1, cur2}] - trio1[{cur1, cur2, cur3}]) + (duo2[{cur2, cur3}] - trio2[{cur2, cur3, cur1}]) + (duo3[{cur1, cur3}] - trio3[{cur1, cur3, cur2}]);
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