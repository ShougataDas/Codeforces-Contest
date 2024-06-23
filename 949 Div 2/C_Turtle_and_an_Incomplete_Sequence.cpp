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
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int num = -1;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            num = a[i];
            idx = i;
            break;
        }
    }
    int num1 = a[idx];
    num *= 2;
    for (int i = idx - 1; i >= 0; i--)
    {
        if (a[i] == -1)
        {
            a[i] = num;
            num *= 2;
        }
    }
    num1 *= 2;
    for (int i = idx + 1; i < n; i++)
    {
        if (a[i] == -1)
        {
            a[i] = num1;
            num1 *= 2;
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        if ((a[i] != (a[i + 1] / 2)) && ((a[i - 1]/2) != a[i]))
        {
            int cur = a[i] * 2;
            bool flag = false;
            for (int j = i+1; j < n; j++)
            {
                if (b[j] != -1)
                {
                    flag = true;
                    i = j;
                    break;
                }
                a[j] = cur;
                cur *= 2;
            }
            if (!flag)
                break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            minus;
            return;
        }
    }
    for (int i : a)
        cout << i << " ";
    cout << "\n";
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