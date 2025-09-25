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
bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    if (n <= 4)
    {
        minus;
        return;
    }
    vector<int> ans;
    for (int i = 1; i <= n; i += 2)
    {
        if(i == 5)
            continue;
        ans.push_back(i);
    }
    ans.push_back(5);
   
    if (n & 1)
        n--;
    ans.push_back(4);
    for (int i = n; i >= 2; i -= 2)
    {
        if (i == 4)
            continue;
        ans.push_back(i);
    }
    for (int i : ans)
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