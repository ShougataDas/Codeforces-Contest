#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// Function to perform BFS and return the distances from the start vertex
vector<int> bfs(const vector<vector<int>>& tree, int start) {
    int n = tree.size();
    vector<int> distances(n, -1);
    queue<int> q;
    q.push(start);
    distances[start] = 0;
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        int current_distance = distances[current];
        
        for (int neighbor : tree[current]) {
            if (distances[neighbor] == -1) {
                distances[neighbor] = current_distance + 1;
                q.push(neighbor);
            }
        }
    }
    
    return distances;
}

// Function to determine the minimum number of steps to paint all vertices blue
int minStepsToPaintBlue(int n, const vector<pair<int, int>>& edges, int a, int b) {
    vector<vector<int>> tree(n + 1);
    for (const auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    // Distances from initial positions of PA and PB
    vector<int> dist_from_a = bfs(tree, a);
    vector<int> dist_from_b = bfs(tree, b);
    
    // Determine the maximum distance PA and PB need to travel
    int max_distance = 0;
    for (int i = 1; i <= n; ++i) {
        if (dist_from_a[i] < dist_from_b[i]) {
            max_distance = max(max_distance, dist_from_b[i]);
        } else {
            max_distance = max(max_distance, dist_from_a[i]);
        }
    }
    
    return max_distance;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        vector<pair<int, int>> edges;
        for (int i = 0; i < n - 1; ++i) {
            int xi, yi;
            cin >> xi >> yi;
            edges.push_back({xi, yi});
        }

        cout << minStepsToPaintBlue(n, edges, a, b) << '\n';
    }

    return 0;
}
