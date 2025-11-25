#include <bits/stdc++.h>
using namespace std;

bool issafe(int node, int color, vector<int>& colors, vector<vector<int>>& graph, int V) {
    for (int adj = 0; adj < V; adj++) {
        if (graph[node][adj] == 1 && colors[adj] == color)
            return false;
    }
    return true;
}

bool solve(int node, vector<int>& colors, int m, int V, vector<vector<int>>& graph) {
    if (node == V)
        return true;

    for (int color = 1; color <= m; color++) {
        if (issafe(node, color, colors, graph, V)) {
            colors[node] = color;
            if (solve(node + 1, colors, m, V, graph))
                return true;
            colors[node] = 0;
        }
    }
    return false;
}

bool graphColoring(int v, vector<vector<int>> &edges, int m) {
    int V = v;
    vector<vector<int>> graph(V, vector<int>(V, 0));

    // Build adjacency matrix
    for (auto &e : edges) {
        graph[e[0]][e[1]] = 1;
        graph[e[1]][e[0]] = 1;
    }

    vector<int> colors(V, 0);

    return solve(0, colors, m, V, graph);
}

int main() {
    int V, E, m;

    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> edges(E, vector<int>(2));

    cout << "Enter each edge (u v):" << endl;
    for (int i = 0; i < E; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    cout << "Enter number of colors (m): ";
    cin >> m;

    bool ans = graphColoring(V, edges, m);

    if (ans)
        cout << "YES, graph can be colored with " << m << " colors." << endl;
    else
        cout << "NO, graph cannot be colored with " << m << " colors." << endl;

    return 0;
}
