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
    int n, q;
    cin >> n >> q;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> pre_xor(n+1);
    map<int, vector<int>> mp;
    mp[0].push_back(0);
    for (int i = 1; i <= n; i++)
    {
        pre_xor[i] = pre_xor[i - 1] ^ a[i];
        mp[pre_xor[i]].push_back(i);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int koto;
        
        koto = (pre_xor[r] ^ pre_xor[l - 1]);
       // cout<<koto<<" ";
        if (koto == 0)
        {
            yes;
            continue;
        }
        vector<int> &pos1 = mp[pre_xor[r]];
        vector<int> &pos2 = mp[pre_xor[l - 1]];

        auto s1 = lower_bound(pos1.begin(),pos1.end(),l);
        auto s2 = --lower_bound(pos2.begin(),pos2.end(),r);

        if (*s1 < *s2)
            yes;
        else
            no;
    }
    cout<<"\n";
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