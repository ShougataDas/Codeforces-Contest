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
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int fr[26] = {0};
    for (int i = 0; i < n; i++)
        fr[s[i] - 'a']++;
    //sort(s.begin(), s.end());
    int count = 0;
    while (true)
    {
        if (count == n)
            break;
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (fr[c - 'a'] > 0)
            {
                cout << c;
                fr[c - 'a']--;
                count++;
            }
        }
    }
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