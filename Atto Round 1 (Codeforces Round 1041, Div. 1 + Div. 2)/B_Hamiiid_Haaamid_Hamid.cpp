#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define dbg(...)
#endif
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

void solve(int cx)
{
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    p--;
    int l = 1, r = n;
    int ans = n;
    vector<int> em;
    for (int i = 0; i < n; i++)
    {
        if (i == p)
            continue;
        if (s[i] == '.')
            em.push_back(i);
    }
    dbg(em);
    int left_wall = 0, left_cell = 0;
    for (int i = 0; i < p; i++)
    {
        if (s[i] == '#')
            left_wall++;
        else
            left_cell++;
    }
    int right_wall = 0, right_cell = 0;
    for (int i = p + 1; i < n; i++)
    {
        if (s[i] == '#')
            right_wall++;
        else
            right_cell++;
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        bool f = true;
        int k = mid - 1;
        if (em.empty())
        {
            if (!(mid >= left_wall + 1 || mid >= right_wall + 1))
            {
                f = false;
            }
        }
        else
        {
            for (int pos : em)
            {
                int tem_left_wall = left_wall, tem_left_cell = left_cell;
                int tem_right_wall = right_wall, tem_right_cell = right_cell;
                if (pos < p)
                {
                    tem_left_cell--;
                    tem_left_wall++;
                }
                else
                {
                    tem_right_cell--;
                    tem_right_wall++;
                }
                bool f1 = (k >= tem_left_wall + min(k, tem_left_cell));
                bool f2 = (k >= tem_right_wall + min(k, tem_right_cell));
                if (!f1 && !f2)
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}
int tc = 1;

int32_t main()
{
    fastread();
    // fraction();
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