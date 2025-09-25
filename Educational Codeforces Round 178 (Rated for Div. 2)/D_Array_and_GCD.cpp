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
const int N = 5000000;
const int candN = 4e5;

vector<int> primes;
bool marked[N];
vector<int> prime_pre_sum(candN);


void sieve()
{
    marked[0] = marked[1] = true;
    marked[2] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (marked[i] == false)
        {
            for (int j = i * i; j < N; j += i)
            {
                marked[j] = true;
            }
        }
    }
    
    for (int i = 2; i <= N; i++)
    {
        if (primes.size() >= candN)
            break;
        if (marked[i] == false)
        {
            primes.push_back(i);
        }
    }
    int i = 1;
    for (auto x : primes)
    {
        prime_pre_sum[i] = prime_pre_sum[i - 1] + x;
        i++;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    vector<int> pre_sum(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + a[i - 1];
    }
    int l = 0, r = n;
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (pre_sum[mid] >= prime_pre_sum[mid])
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << n - ans << "\n";
}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }

    return 0;
}