#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define dbg(...)
#endif
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
    vector<int> a(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }

    if (n == k)
    {
        vector<int> s;
        for (int i = 1; i < n; i += 2)
        {
            s.push_back(a[i]);
        }
        s.push_back(0);
        dbg(s);
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            dbg(i, s[i]);
            if (i != s[i] - 1)
            {
                count = i + 1;
                break;
            }
        }
        dbg(count);
        cout << count << "\n";
        return;
    }
    int ex = n - k + 1;
    int ans = -1;
    for (int i = 1; i <= ex; i++)
    {
        if (a[i] != 1)
        {
            ans = 1;
            break;
        }
    }
    if (ans == -1)
    {
        int count = 2;

        for (int i = ex; i < n; i++)
        {
            if (a[i] != count)
            {
                break;
            }
            count++;
        }
        cout << count << "\n";
    }
    else
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