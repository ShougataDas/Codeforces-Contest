#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(7);            \
    cout.setf(ios::fixed, ios::floatfield);
using namespace std;
const int mod = 1e9 + 7;
const double PI = acos(-1);
const double eps = 1e-9;
const int INF = 4e18;

void solve(int cx)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            sum -= a[i];
        else
            sum += a[i];
    }

    int tt = 0;
    if (n > 1)
    {
        tt = n - 2 + (n % 2);
    }

    int ans = max(sum, sum + tt);

    int ex = -INF;

    vector<int> suf_even(n + 2, -INF);
    vector<int> suf_odd(n + 2, -INF);
    for (int i = n - 1; i >= 0; i--)
    {
        suf_even[i] = suf_even[i + 1];
        suf_odd[i] = suf_odd[i + 1];
        if (i & 1)
        {
            suf_even[i] = max(suf_even[i], i + 2 * a[i]);
        }
        else
        {
            suf_odd[i] = max(suf_odd[i], i - 2 * a[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            if (i + 1 < n && suf_odd[i + 1] != -INF)
            {
                ex = max(ex, (2 * a[i] - i) + suf_odd[i + 1]);
            }
        }
        if (i % 2 == 0)
        {
            if (i + 1 < n && suf_even[i + 1] != -INF)
            {
                ex = max(ex, suf_even[i + 1] - (i + 2 * a[i]));
            }
        }
    }

    if (ex != -INF)
    {
        ans = max(ans, sum + ex);
    }

    cout << ans << endl;
}

int tc = 1;

int32_t main()
{
    fastread();
    if (tc)
    {
        int t;
        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            solve(i);
        }
    }
    else
    {
        solve(0);
    }

    return 0;
}