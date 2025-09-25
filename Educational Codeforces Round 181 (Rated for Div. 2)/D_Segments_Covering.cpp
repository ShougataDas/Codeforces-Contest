#ifndef ONLINE_JUDGE
#include"debugger.h"
#else
#define dbg(...)
#endif
#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 998244353;
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        res %= mod;
        a = a * a;
        a %= mod;
        b >>= 1;
    }
    return res;
}
inline int add(int x, int y)
{
    return (x+y>=mod ? x+y-mod : x+y);
}
 
inline int sub(int x, int y)
{
    return (x-y<0 ? x-y+mod : x-y);
}
 
inline int gun(int x, int y)
{
    return ((x*1ll*y)%mod);
}
 
inline int vag(int x, int y)
{
    return (x*1ll* binpow(y,mod - 2))%mod;
}


struct segmenttree {
    int n;
    vector<int> st;

    void init(int _n) {
        this->n = _n;
        st.resize(4 * n, 0);
    }

    void build(int start, int ending, int node, vector<int> &v) {
        if (start == ending) {
            st[node] = v[start];
            return;
        }
        int mid = (start + ending) / 2;
        build(start, mid, 2 * node + 1, v);
        build(mid + 1, ending, 2 * node + 2, v);
        st[node] = add(st[node * 2 + 1] , st[node * 2 + 2]);
    }

    int query(int start, int ending, int l, int r, int node) {
        if (start > r || ending < l) {
            return 0;
        }
        if (start >= l && ending <= r) {
            return st[node];
        }
        int mid = (start + ending) / 2;
        int q1 = query(start, mid, l, r, 2 * node + 1);
        int q2 = query(mid + 1, ending, l, r, 2 * node + 2);

        return add(q1 , q2);
    }

    void update(int start, int ending, int node, int index, int value) {

        if (start == ending) {
            st[node] = value;
            return;
        }

        int mid = (start + ending) / 2;
        if (index <= mid) {
            update(start, mid, 2 * node + 1, index, value);
        }
        else {
            update(mid + 1, ending, 2 * node + 2, index, value);
        }

        st[node] = add(st[node * 2 + 1] , st[node * 2 + 2]);

        return;
    }

    void build(vector<int> &v) {
        build(0, n - 1, 0, v);
    }

    int query(int l, int r) {
        return query(0, n - 1, l, r, 0);
    }

    void update(int x, int y) {
        update(0, n - 1, 0, x, y);
    }
};

bool cmp(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>>seg(n,vector<int>(3));
    vector<int>co;
    co.push_back(0);
    co.push_back(m);
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        int p,q;
        cin >> seg[i][0] >> seg[i][1] >> p >> q;
        co.push_back(seg[i][0] - 1);
        co.push_back(seg[i][1]);

        int hor = vag(sub(q,p),q);
        mul = gun(mul, hor);

        int hor2 = vag(p,sub(q,p));
        seg[i][2] = hor2;

    }
    int N = co.size();
    sort(seg.begin(), seg.end(),cmp);
     sort(co.begin(), co.end());
    co.erase(unique(co.begin(), co.end()), co.end());
    segmenttree st;
    st.init(N);
    st.update(0,1);
     for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(co.begin(),co.end(),(seg[i][0] - 1));
        auto it2 = co.begin();
        int l = it - it2;
        auto it3 = lower_bound(co.begin(),co.end(),seg[i][1]);
        int r = it3 - it2;
        int pp = st.query(0,l);
        int tem = gun(pp, seg[i][2]);
        st.update(r, tem);
    }
    int M = lower_bound(co.begin(), co.end(), m) - co.begin();
    int ans = st.query(0, M);
    ans = gun(ans, mul);
    cout << ans << "\n";
}
 
int32_t main()
{
    fastread();
    int t = 1;
    //cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}