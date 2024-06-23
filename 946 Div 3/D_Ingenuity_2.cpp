#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
bool check(string s, pii src, string dir)
{
    int x = 0;
    int y = 0;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if (c1 == 0 || c2 == 0)
    {
        return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H')
        {
            if (dir[i] == 'N')
            {
                y++;
            }
            else if (dir[i] == 'S')
                y--;
            else if (dir[i] == 'E')
                x++;
            else
                x--;
        }
    }
    if (x != src.first || y != src.second)
    {
        return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    pii src = {0, 0};
    for (char ch : s)
    {
        if (ch == 'N')
        {
            src.second++;
        }
        else if (ch == 'S')
            src.second--;
        else if (ch == 'E')
            src.first++;
        else
            src.first--;
    }
    if (src.first % 2 == 1 || src.second % 2 == 1)
    {
        no;
        return;
    }
    src.first /= 2;
    src.second /= 2;

    string ans = s;
    //cout<<src.first<<" "<<src.second<<"\n";

    if (src.first == 0 && src.second == 0)
    {
        int N = 0, S = 0;
        for (char ch : s)
        {
            if (ch == 'N')
                N++;
            if (ch == 'S')
                S++;
        }
        if (N > 0 && S > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'N')
                {
                    ans[i] = 'R';
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'S')
                {
                    ans[i] = 'R';
                    break;
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (ans[i] != 'R')
                {
                    ans[i] = 'H';
                }
            }
            if (check(ans, src, s))
            {
                cout << ans << "\n";
                return;
            }
        }
        ans = s;
        int E = 0, W = 0;
        for (char ch : s)
        {
            if (ch == 'E')
                E++;
            if (ch == 'W')
                W++;
        }
        if (E > 0 && W > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'E')
                {
                    ans[i] = 'R';
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'W')
                {
                    ans[i] = 'R';
                    break;
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (ans[i] != 'R')
                {
                    ans[i] = 'H';
                }
            }
            if (check(ans, src, s))
            {
                cout << ans << "\n";
                return;
            }
            else
                no;
        }
        else
            no;
    }
    else if (src.first >= 0 && src.second >= 0)
    {
        int xx = 0, yy = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'E' && xx != src.first)
            {
                xx++;
                ans[i] = 'R';
            }
            else if (s[i] == 'N' && yy != src.second)
            {
                yy++;
                ans[i] = 'R';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i] != 'R')
            {
                ans[i] = 'H';
            }
        }
        if (check(ans, src, s))
        {
            cout << ans << "\n";
        }
        else
        {
            no;
        }
    }
    else if (src.first <= 0 && src.second >= 0)
    {
        int xx = 0, yy = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W' && xx != src.first)
            {
                xx--;
                ans[i] = 'R';
            }
            else if (s[i] == 'N' && yy != src.second)
            {
                yy++;
                ans[i] = 'R';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i] != 'R')
            {
                ans[i] = 'H';
            }
        }
        if (check(ans, src, s))
        {
            cout << ans << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (src.first <= 0 && src.second <= 0)
    {
        int xx = 0, yy = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W' && xx != src.first)
            {
                xx--;
                ans[i] = 'R';
            }
            else if (s[i] == 'S' && yy != src.second)
            {
                yy--;
                ans[i] = 'R';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i] != 'R')
            {
                ans[i] = 'H';
            }
        }
        if (check(ans, src, s))
        {
            cout << ans << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {

        int xx = 0, yy = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'E' && xx != src.first)
            {
                xx++;
                ans[i] = 'R';
            }
            else if (s[i] == 'S' && yy != src.second)
            {
                yy--;
                ans[i] = 'R';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i] != 'R')
            {
                ans[i] = 'H';
            }
        }
        if (check(ans, src, s))
        {
            cout << ans << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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