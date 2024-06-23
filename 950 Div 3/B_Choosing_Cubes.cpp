#include <bits/stdc++.h>
// #define int long long
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
bool cmp(pii a, pii b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<pii> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i + 1};
    }
    int val = a[f - 1].first;
    sort(a.begin(), a.end(), cmp);
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i].second == f)
        {
            idx = i + 1;
            break;
        }
    }
    bool flag = false;
    for (int i = 0; i < k; i++)
    {
        if (a[i].first == val)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        if (a[k].first == val)
            cout << "MAYBE\n";
        else
            yes;
    }
    else
        no;
}

int main()
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