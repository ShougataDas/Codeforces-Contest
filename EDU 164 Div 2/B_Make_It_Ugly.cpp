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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, r = n - 1;
   // int c = 0;
    while (l < r)
    {
        if (a[l] == a[r])
            l++;
        else
            break;
    }
    if (l == r)
        minus;
    else
    {
       // cout<<l<<"\n";
        int l1 = 0, r1 = n - 1;
        int c = 0;
        while (l1 < r1)
        {
            if (a[l1] == a[r1])
            {
                r1--;
                c++;
            }
            else
                break;
        }
        //cout<<c<<"\n";
        cout<<min(l,c)<<"\n";
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