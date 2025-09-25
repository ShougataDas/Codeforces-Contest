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
void solve()
{
    int n;
    cin >> n;
    string ans;
    for (int i = 0; i < n; i++)
    {
        ans += '0';
        cout << "? " << ans << endl;
        int res;
        cin >> res;
        if (res == 0)
            ans.back() = '1';
    }
    cout << "? " << ans << endl;
    int res;
    cin >> res;
    if (res == 1)
    {
        cout << "! " << ans << endl;
    }
    else
    {
        string temp = ans;
        reverse(temp.begin(), temp.end());
        cout << "? " << temp << endl;
        int res;
        cin >> res;
        if (res == 1)
        {
            cout << "! " << temp << endl;
        }
        else
        {
            char ch = ans.back();
            string result = "";
            result += ch;
            for (int i = 0; i < ans.size()-1; i++)
                result += ans[i];
            cout << "? " << result << endl;
            int res;
            cin >> res;
            if (res == 1)
            {
                cout << "! " << result << endl;
            }
            else
            {
                ch = temp.back();
                result = "";
                result += ch;
                for (int i = 0; i < temp.size()-1; i++)
                    result += temp[i];
                cout << "? " << result << endl;
                int res;
                cin >> res;
                if (res == 1)
                {
                    cout << "! " << result << endl;
                }
                else
                {
                    char ch = ans[0];
                    string result = "";
                    for (int i = 1; i < ans.size(); i++)
                        result += ans[i];
                    result += ch;
                    cout << "? " << result << endl;
                    int res;
                    cin >> res;
                    if (res == 1)
                    {
                        cout << "! " << result << endl;
                    }
                    else
                    {
                        char ch = temp[0];
                        string result = "";
                        for (int i = 1; i < temp.size(); i++)
                            result += temp[i];
                        result += ch;
                        cout << "! " << result << endl;
                    }
                }
            }
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