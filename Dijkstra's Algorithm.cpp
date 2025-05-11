#include <iostream>
#include <vector>
#include <queue>
#include <climits>  // For INT_MAX

using namespace std;

// Define a pair (distance, node)
typedef pair<int, int> pii;

void dijkstra(int start, vector<vector<pii>>& graph, vector<int>& dist) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue; // Skip if we already found a better way

        for (auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int n = 5; // number of nodes (0 to 4)
    vector<vector<pii>> graph(n);

    // Add edges: graph[u].push_back({v, weight});
    graph[0].push_back({1, 2});
    graph[0].push_back({2, 4});
    graph[1].push_back({2, 1});
    graph[1].push_back({3, 7});
    graph[2].push_back({4, 3});
    graph[3].push_back({4, 1});

    vector<int> dist(n, INT_MAX);

    dijkstra(0, graph, dist);

    // Print shortest distances
    for (int i = 0; i < n; ++i) {
        cout << "Distance from 0 to " << i << " = " << dist[i] << endl;
    }

  return 0;
}
