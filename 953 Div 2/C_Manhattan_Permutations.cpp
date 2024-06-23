#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n, k;
    cin >> n >> k;
    int sum = (n * (n + 1)) / 2;
    if (k & 1)
    {
        cno;
        return;
    }
    if (k == 0)
    {
        cyes;
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << "\n";
        return;
    }
    
    vector<int> ans(n);
    for(int i = 0;i<n;i++)
        ans[i] = i;
    int i = 0, j = n-1;
    while (i < j)
    {
        int cost = 2*(j-i);
        if(cost<=k)
        {
            swap(ans[i],ans[j]);
            k-=cost;
            i++;
            j--;
        }
        else
            i++;

    }

    if(k!=0)
        cno;
    else
    {
        cyes;
        for (int i = 0; i < n; i++)
            cout << ans[i]+1 << " ";
        cout << "\n";
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