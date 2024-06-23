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
vector<int> build_gcd(vector<int> &a, int n)
{
    vector<int> ans(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        ans[i] = __gcd(a[i], a[i + 1]);
    }
    return ans;
}
bool boro(vector<int> a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> g = build_gcd(a, n);
    if (boro(g, n - 1))
    {
        yes;
        return;
    }
    int idx = -1;
    for (int i = 0; i < n - 2; i++)
    {
        if (g[i] > g[i + 1])
        {
            idx = i;
            break;
        }
    }
    vector<int> check(n - 1);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == idx)
            continue;
        check[j++] = a[i];
    }
    vector<int> baad1 = build_gcd(check, n - 1);
    if (boro(baad1, n - 2))
    {
        yes;
        return;
    }
    check.clear();
    j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == idx + 1)
            continue;
        check[j++] = a[i];
    }
    baad1.clear();
    baad1 = build_gcd(check, n - 1);
    if (boro(baad1, n - 2))
    {
        yes;
        return;
    }
    check.clear();
    j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == idx + 2)
            continue;
        check[j++] = a[i];
    }
    baad1.clear();
    baad1 = build_gcd(check, n - 1);
    if (boro(baad1, n - 2))
    {
        yes;
        return;
    }
    no;
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