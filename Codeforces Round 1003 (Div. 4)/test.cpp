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
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    
    // Initialize with very small number
    int cur = -1e18;
    bool possible = true;
    
    for(int ai : a) {
        // Option 1: No operation, only valid if ai >= cur
        int cand1 = (ai >= cur) ? ai : LLONG_MIN;
        dbg(cand1);
        
        // Option 2: Use operation with binary search
        int needed = cur + ai;
        auto pos = lower_bound(b.begin(), b.end(), needed);
        int cand2 = LLONG_MIN;
        
        if(pos != b.end()) {
            cand2 = *pos - ai;
        }
        dbg(cand2);
        
        // Check if at least one option is valid
        if(cand1 == LLONG_MIN && cand2 == LLONG_MIN) {
            possible = false;
            break;
        }
        
        // Get best valid option
        int best;
        if(cand1 != LLONG_MIN && cand2 != LLONG_MIN) {
            best = min(cand1, cand2);
        } else {
            best = (cand1 != LLONG_MIN) ? cand1 : cand2;
        }
        dbg(best);
        
        // Update current value
        cur = best;
    }
    
    if(possible) yes;
    else no;
}

int32_t main() {
    fastread();
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}