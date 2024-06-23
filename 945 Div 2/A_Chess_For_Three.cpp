#include <bits/stdc++.h>
#define int int
#define ll int
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
int chess[32][32][32];
void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<chess[x][y][z]<<"\n";
}

int32_t main()
{
    fastread();

   for (int i = 0; i <= 30; i++)
    {
        for (int j = 0; j <= 30; j++)
        {
            for (int k = 0; k <= 30; k++)
            {
                chess[i][j][k] = -1;
            }
        }
    }
    chess[0][0][0] = 0;
    for (int i = 0; i <= 30; i++)
    {
        for (int j = 0; j <= 30; j++)
        {
            for (int k = 0; k <= 30; k++)
            {
                if (i >= 2 && chess[i - 2][j][k] != -1)
                    chess[i][j][k] = max(chess[i][j][k], chess[i - 2][j][k]);
                if (j >= 2 && chess[i][j - 2][k] != -1)
                    chess[i][j][k] = max(chess[i][j][k], chess[i][j - 2][k]);
                if (k >= 2 && chess[i][j][k - 2] != -1)
                    chess[i][j][k] = max(chess[i][j][k], chess[i][j][k - 2]);
                if (i && j && chess[i - 1][j - 1][k] != -1)
                    chess[i][j][k] = max(chess[i][j][k], chess[i - 1][j - 1][k] + 1);
                if (i && k && chess[i - 1][j][k - 1] != -1)
                    chess[i][j][k] = max(chess[i][j][k], chess[i - 1][j][k - 1] + 1);
                if (k && j && chess[i][j - 1][k - 1] != -1)
                    chess[i][j][k] = max(chess[i][j][k], chess[i][j - 1][k - 1] + 1);
            }
        }
    }

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}