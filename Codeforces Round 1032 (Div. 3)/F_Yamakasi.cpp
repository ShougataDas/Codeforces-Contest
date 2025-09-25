#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define dbg(...)
#endif
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
const int neg = -1e18;
struct segmenttree
{
    int n;
    vector<int> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, neg);
    }

    void build(int start, int ending, int node, vector<int> &v)
    {
        // leaf node base case
        if (start == ending)
        {
            st[node] = v[start];
            return;
        }

        int mid = (start + ending) / 2;

        // left subtree is (start,mid)
        build(start, mid, 2 * node + 1, v);

        // right subtree is (mid+1,ending)
        build(mid + 1, ending, 2 * node + 2, v);

        st[node] = max(st[node * 2 + 1], st[node * 2 + 2]);
    }

    int query(int start, int ending, int l, int r, int node)
    {
        // non overlapping case
        if (start > r || ending < l)
        {
            return neg;
        }

        // complete overlap
        if (start >= l && ending <= r)
        {
            return st[node];
        }

        // partial case
        int mid = (start + ending) / 2;

        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return max(q1, q2);
    }

    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0);
    }
};

void solve()
{
    int n, s, x;
    cin >> n >> s >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    map<int, int> mp;
    mp[0] = 1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            sum = 0;
            mp.clear();
            mp[0] = 1;
            continue;
        }
        sum += a[i];
        if (mp.count(sum - s))
        {
            ans += mp[sum - s];
        }
        mp[sum]++;
    }
    mp.clear();
    sum = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x - 1)
        {
            sum = 0;
            mp.clear();
            mp[0] = 1;
            continue;
        }
        sum += a[i];
        if (mp.count(sum - s))
        {
            ans -= mp[sum - s];
        }
        mp[sum]++;
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