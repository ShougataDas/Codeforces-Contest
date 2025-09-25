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

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> fib(n + 2);
    fib[1] = 1;
    fib[2] = 2;

    for (int i = 3; i <= n + 1; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += fib[i];
    vector<int> req_a = {fib[n], fib[n], fib[n + 1]};
    vector<int> req_b = {fib[n], fib[n], sum};
    vector<vector<int>> prems_a;
    vector<vector<int>> prems_b;
    do
    {
        prems_a.push_back({req_a[0], req_a[1], req_a[2]});
    } while (next_permutation(req_a.begin(), req_a.end()));
    do
    {
        prems_b.push_back({req_b[0], req_b[1], req_b[2]});
    } while (next_permutation(req_b.begin(), req_b.end()));

    string ans = "";
    while (m--)
    {
        int w, l, h;
        cin >> w >> l >> h;
        vector<int> cur = {w, l, h};
        bool fit = false;
        do
        {
            for (auto &x : prems_a)
            {
                if (x[0] <= cur[0] && x[1] <= cur[1] && x[2] <= cur[2])
                {
                    fit = true;
                    break;
                }
            }
            if (fit)
                break;
            for (auto &x : prems_b)
            {
                if (x[0] <= cur[0] && x[1] <= cur[1] && x[2] <= cur[2])
                {
                    fit = true;
                    break;
                }
            }
            if (fit)
                break;

        } while (next_permutation(cur.begin(), cur.end()));

        ans += (fit ? '1' : '0');
    }
    cout << ans << "\n";
}

int32_t main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
