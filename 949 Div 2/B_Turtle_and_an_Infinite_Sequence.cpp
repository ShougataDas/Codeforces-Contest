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
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
void solve()
{
    int l, r;
    cin >> l >> r;
    int lo, hi = l + r;
    if (l > r)
        lo = l - r;
    else
        lo = 0;
    int count = 0;
    int num = 30;
    while (num >= 0)
    {
        int op1 = hi / binpow(2, num);
        int op2 = lo / binpow(2, num);
        if ((op1 % 2) == (op2 % 2))
        {
            count |= (op1 % 2) * binpow(2, num);
        }
        else
            count |= binpow(2, (num + 1)) - 1;
        num--;
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