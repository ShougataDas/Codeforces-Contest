#include<bits/stdc++.h>

using namespace std;


int w[100010];


void solve() {

        int n, a, b; cin >> n >> a >> b;

        int c = __gcd(a, b);


        for(int i = 1; i <= n; i++) {

                cin >> w[i];

                w[i] %= c;

        }

        sort(w + 1, w + 1 + n);

        int ans = w[n] - w[1];

        for(int i = 1; i < n; i++) {

                ans = min(ans, w[i] + c - w[i + 1]);

        }

        cout << ans << '\n';

}


int main() {

        int t; cin >> t;

        while(t--) {

                solve();

        }

}