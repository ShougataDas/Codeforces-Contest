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

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    
    int prv = -1e18; 
    for (int i = 0; i < n; i++) {
        int need = a[i] + prv;
        auto pos = lower_bound(b.begin(), b.end(), need);
        if (a[i] < prv && pos == b.end()) {
            no;
            return;
        }
        
        if(a[i] >= prv && pos!=b.end())
        {
            prv = min(a[i],*pos - a[i]);
        }
        else if(a[i] >= prv)
            prv = a[i];
        else
            prv = (pos != b.end()) ? (*pos - a[i]) : LLONG_MIN;
    }
    yes;
}

int32_t main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
