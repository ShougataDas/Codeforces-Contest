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
int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}
m
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int mx = a[n - 1];
    int l = 1;
    for (int i = 0; i < n; i++)
    {
        l = lcm(l, a[i]);
        if (l > mx)
        {
            cout << n << "\n";
            return;
        }
    }
    assert(l == mx);
    vector<int> d;
    for (int i = 1; i * i <= mx; i++)
    {
        if (mx % i == 0)
        {
            d.push_back(i);
            if (i != (mx / i))
                d.push_back(mx / i);
        }
    }
    int maxi = 0;
    for (int ele : d)
    {
        if (binary_search(a.begin(), a.end(), ele))
            continue;
        int cur = 0;
        int l1 = 1;
        for (int i = 0; i < n; i++)
        {
            if (ele % a[i] == 0)
            {
                cur++;
                l1 = lcm(l1,a[i]);
            }
        }
        if(l1 == ele)
            maxi = max(maxi, cur);
    }
    cout << maxi << "\n";
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