#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YEs" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;

void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    // int sz = n*n;
    vector<int> a(n * n);
    for (int i = 0; i < n * n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    int x = a[0];
    vector<int> ans;
    for (int j = 0; j < n; j++)
    {
        ans.push_back(x);
        int cr = x;
        for (int k = 1; k < n; k++)
        {
            cr += d;
            ans.push_back(cr);
        }
        x += c;
    }
    sort(ans.begin(), ans.end());
    if (a == ans)
    {
        yes;
       
    }
    else
    {
        no;
       
    }
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