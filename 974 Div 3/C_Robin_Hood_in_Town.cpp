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
void solve()
{
    double n;
    cin >> n;
    vector<double> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (n == 1 || n == 2)
    {
        minus;
        return;
    }
    sort(a.begin(), a.end());
    double tar = a[n / 2];
    double avg = sum / n;
    double sum1 = sum;
    //cout << tar << " " << sum << " " << avg << "\n";
    if (tar < (avg / 2))
    {
        cout << 0 << "\n";
        return;
    }
    sum+=(2*tar);
    avg = sum/n;
    while((avg/2) <= tar)
    {
        sum++;
        avg = sum/n;
    }
    cout << sum - sum1 <<"\n";
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