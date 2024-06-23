#include <bits/stdc++.h>
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
int orry[100001][20];


int q(int l, int r)
{

    int sum = 0;
    for (int j = 20; j >= 0; j--)
    {
        if ((1 << j) <= r - l + 1)
        {
            sum |= orry[l][j];

            l += 1 << j;
        }
    }
    return sum;
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     for (int i = 0; i < n; i++)
        orry[i][0] = a[i];

    for (int j = 1; j <= 20; j++)
        for (int i = 0; i + (1 << j) <= n; i++)
            orry[i][j] = orry[i][j - 1] | orry[i + (1 << (j - 1))][j - 1];
    int l = 1, r = n;
    int ans = n;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int val = 0;
        for (int i = 0; i < mid; i++)
        {
            val |= a[i];
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            int lo = i;
            int hi = i + mid - 1;
            if (hi <= n - 1)
            {
                int cur = q(lo, hi);
                if (cur != val)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
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