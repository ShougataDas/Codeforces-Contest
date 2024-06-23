#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9 + 7;

int lakes[1002][1002];
bool visited[1002][1002];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int n, m;
int ans,ans1,ans2;
bool is_safe(pair<int, int> co)
{
    if (lakes[co.first][co.second] == 0)
        return false;
    return true;
}
bool in_border(pair<int, int> co)
{
    if (co.first >= 0 && co.first < n && co.second >= 0 && co.second < m)
        return true;
    return false;
}
int dfs(pair<int, int> p)
{
    int x = p.first;
    int y = p.second;
    visited[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        pair<int, int> adj_node = {new_x, new_y};
        if (!visited[new_x][new_y] && is_safe(adj_node) && in_border(adj_node))
        {
            visited[new_x][new_y] = true;
            ans2 =  lakes[new_x][new_y] + dfs(adj_node);
        }
    }
    return ans2;
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> lakes[i][j];
        }
    }
    ans1 = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (lakes[i][j] != 0 && !visited[i][j])
            {
                ans2 = 0;
                ans = lakes[i][j] + dfs({i, j});
            }
            ans1 = max(ans1,ans);
        }
    }
    cout << ans1 << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
        }
    }
    ans = 0,ans2 = 0,ans1 = 0;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}