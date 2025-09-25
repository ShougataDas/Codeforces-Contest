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
    vector<int> st, lazy;

    void init(int _n)
    {
        this->n = _n;
        st.resize(4 * n, 0);
        lazy.resize(4 * n, 0);
    }

    void build(int start, int ending, int node)
    {
        // leaf node base case
        if (start == ending)
        {
            st[node] = 0;
            return;
        }

        int mid = (start + ending) / 2;

        // left subtree is (start,mid)
        build(start, mid, 2 * node + 1);

        // right subtree is (mid+1,ending)
        build(mid + 1, ending, 2 * node + 2);

        st[node] = st[node * 2 + 1] + st[node * 2 + 2];
    }

    int query(int start, int ending, int l, int r, int node)
    {
        // non overlapping case
        if (start > r || ending < l)
        {
            return 0;
        }

        // lazy propagation / clear the lazy update
        if (lazy[node] != 0)
        {
            // pending updates
            // update the segment tree node
            st[node] += lazy[node] * (ending - start + 1);
            if (start != ending)
            {
                // propagate the updated value
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }
            lazy[node] = 0;
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

        return q1 + q2;
    }

    void update(int start, int ending, int node, int l, int r, int value)
    {
        if (start > r || ending < l)
        {
            return;
        }
        if (lazy[node] != 0)
        {
            st[node] += lazy[node] * (ending - start + 1);
            if (start != ending)
            {
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }
            lazy[node] = 0;
        }

        // complete overlap
        if (start >= l && ending <= r)
        {
            st[node] += value * (ending - start + 1);
            if (start != ending)
            {
                lazy[2 * node + 1] += value;
                lazy[2 * node + 2] += value;
            }
            return;
        }

        // partial case
        int mid = (start + ending) / 2;

        update(start, mid, 2 * node + 1, l, r, value);

        update(mid + 1, ending, 2 * node + 2, l, r, value);

        st[node] = st[node * 2 + 1] + st[node * 2 + 2];

        return;
    }

    void build()
    {
        build(0, n - 1, 0);
    }

    int query(int l, int r)
    {
        return query(0, n - 1, l, r, 0);
    }

    void update(int l, int r, int x)
    {
        update(0, n - 1, 0, l, r, x);
    }
};
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    // int mx = -1;
    set<int> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        // mx = max(mx, a[i]);
        s.insert(a[i]);
    }
    int count = 0;
    for (int i : s)
    {
        if (i == count)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    segmenttree st;
    st.init(n+1);
    st.build();
    for (int i = 0; i <= count; i++)
    {
        int left = mp[i];
        int right = n - i;
        if (left <= right)
            st.update(left, right, 1);
    }
    for (int i = 0; i <= n; i++)
    {
        int ans = st.query(i, i);
        cout << ans << " ";
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