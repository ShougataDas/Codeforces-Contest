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
struct segmenttree
{
    int n;
    vector<int> st;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, 0);
    }

    void build(int start, int ending, int node, vector<int> &v)
    {
        if (start == ending)
        {
            st[node] = v[start];
            return;
        }

        int mid = (start + ending) / 2;
        build(start, mid, 2 * node + 1, v);
        build(mid + 1, ending, 2 * node + 2, v);
        st[node] = st[node * 2 + 1] + st[node * 2 + 2];
    }

    int query(int start, int ending, int l, int r, int node)
    {
        if (start > r || ending < l)
        {
            return 0;
        }
        if (start >= l && ending <= r)
        {
            return st[node];
        }
        int mid = (start + ending) / 2;
        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return q1 + q2;
    }

    void update(int start, int ending, int node, int index, int value)
    {
        if (start == ending)
        {
            st[node] += value;
            return;
        }

        int mid = (start + ending) / 2;
        if (index <= mid)
        {
            update(start, mid, 2 * node + 1, index, value);
        }
        else
        {
            update(mid + 1, ending, 2 * node + 2, index, value);
        }

        st[node] = st[node * 2 + 1] + st[node * 2 + 2];
    }

    void build(vector<int> &v)
    {
        build(0, n - 1, 0, v);
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0);
    }

    void update(int x, int y)
    {
        update(0, n - 1, 0, x, y);
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    segmenttree st;
    st.init(n);
    vector<int> l(n), r(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        l[i] = st.query(a[i] + 1, n);
        ans += l[i];
        st.update(a[i], 1);
    }
    st.st.clear();
    st.init(n);
    for (int i = n - 1; i >= 0; i--)
    {
        r[i] = st.query(a[i] + 1, n);
        st.update(a[i], 1);
    }
    for (int i = 0; i < n; i++)
    {
        if (r[i] < l[i])
            ans -= (l[i] - r[i]);
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