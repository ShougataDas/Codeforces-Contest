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
int lcm(int a, int b)
{
    int mul = a * b;
    return (mul / __gcd(a, b));
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        s.insert(a[i]);
    }
    int sz = s.size();
    vector<int> ans(sz);
    int idx = 0;
    for (int x : s)
    {
        ans[idx++] = x;
    }
    // for (int i = 0; i < sz; i++)
    //   cout << ans[i] << " ";
    int sequ = 0;
    for (int i = sz - 1; i >= 0; i--)
    {
        int now = ans[i];
        // bool flag = false;
        int freq = mp[ans[i]];
        for (int j = i - 1; j >= 0; j--)
        {
            int l = lcm(now, ans[j]);
            if (l > ans[sz - 1])
            {
                cout << n << "\n";
                return;
            }
            if (mp[l] > 0 && l != now)
                continue;
            freq += mp[ans[j]];
            now = l;
            if (mp.find(now) == mp.end())
                sequ = max(sequ, freq);
        }
        if (freq == 1)
            continue;
        if (mp[now] > 0)
            continue;
        sequ = max(sequ, freq);
        if (sequ == n)
            break;
    }
    cout << sequ << "\n";
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