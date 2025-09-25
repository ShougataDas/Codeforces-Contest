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
const double PI = acos(-1);
const double eps = 1e-9;
long long binpow(long long a, long long b, int mod)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        res %= mod;
        a = a * a;
        a %= mod;
        b >>= 1;
    }
    return res;
}
inline int add(int x, int y, int mod)
{
    return (x + y >= mod ? x + y - mod : x + y);
}

inline int sub(int x, int y, int mod)
{
    return (x - y < 0 ? x - y + mod : x - y);
}

inline int gun(int x, int y, int mod)
{
    return ((x * 1ll * y) % mod);
}

inline int vag(int x, int y, int mod)
{
    return (x * 1ll * binpow(y, mod - 2, mod)) % mod;
}
ll extended_gcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll g = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

ll modinv(ll a, ll m)
{
    ll x, y;
    extended_gcd(a, m, x, y);
    x %= m;
    if (x < 0)
        x += m;
    return x;
}

void solve(int cx)
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pr = k + 1;
    for (int i = 2; i * i <= k + 1; i++)
    {
        if ((k + 1) % i == 0)
        {
            pr = i;
            break;
        }
    }
    int ex = ((k % pr) + pr) % pr;
    int inv = modinv(ex,pr);
    /// cout << inv << " ";
    for (int i = 0; i < n; i++)
    {
        int tem = (a[i] % pr + pr) % pr;
        int ex = (pr - tem) % pr;
        int tt = gun(ex, inv, pr);
        a[i] += (tt * k);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int tc = 1;

int32_t main()
{
    fastread();
    //  fraction();
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