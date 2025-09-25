#include <bits/stdc++.h>
using namespace std;

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

const int mod = 1e9 + 7;
const double PI = acos(-1);
const double eps = 1e-9;

void solve(int cx)
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    vector<int> miss;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 0)
        {
            miss.push_back(i);
        }
    }
    if (miss.size() == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = miss[0];
                break;
            }
        }
    }
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            if (l == -1)
                l = i + 1;
            r = i + 1;
        }
    }
    if (l == -1)
    {
        cout << 0 << endl;
        return;
    }
    cout << (r - l + 1) << endl;
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