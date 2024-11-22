#include<iostream>
#include<queue> // Required for BFS
using namespace std;

#define MAX_VERTICES 100

void addEdge(int adj[MAX_VERTICES][MAX_VERTICES], int v, int w) {
    adj[v][w] = 1;
    // For an undirected graph, uncomment the next line:
    // adj[w][v] = 1;
}

void DFS(int adj[MAX_VERTICES][MAX_VERTICES], int visited[MAX_VERTICES], int V, int v) {
    visited[v] = 1;
    cout << v << " ";
    for (int i = 0; i < V; ++i) {
        if (adj[v][i] == 1 && visited[i] == 0) {
            DFS(adj, visited, V, i);
        }
    }
}

void BFS(int adj[MAX_VERTICES][MAX_VERTICES], int visited[MAX_VERTICES], int V, int startVertex) {
    queue<int> q;
    visited[startVertex] = 1;
    q.push(startVertex);

    cout << "Breadth First Traversal starting from vertex " << startVertex << ":\n";

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (int i = 0; i < V; ++i) {
            if (adj[v][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    cout << endl;
}

void Warshall(int adj[MAX_VERTICES][MAX_VERTICES], int V) {
    int transitiveClosure[MAX_VERTICES][MAX_VERTICES];

    // Copy the adjacency matrix into the transitive closure matrix
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            transitiveClosure[i][j] = adj[i][j];
        }
    }

    // Apply Warshall's Algorithm
    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                transitiveClosure[i][j] = transitiveClosure[i][j] || (transitiveClosure[i][k] && transitiveClosure[k][j]);
            }
        }
    }

    

    // Print the transitive closure matrix
    cout << "Transitive Closure Matrix:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cout << transitiveClosure[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V, E;
    cin >> V >> E;

    int adj[MAX_VERTICES][MAX_VERTICES] = {0};
    int visited[MAX_VERTICES] = {0};

    for (int i = 0; i < E; ++i) {
        int v, w;
        cin >> v >> w;
        addEdge(adj, v, w);
    }

    int startVertex;
    cin >> startVertex;

    cout << "Depth First Traversal starting from vertex " << startVertex << ":\n";
    DFS(adj, visited, V, startVertex);

    // Reset visited array for BFS
    fill(begin(visited), end(visited), 0);

    BFS(adj, visited, V, startVertex);

    // Warshall's Algorithm
    Warshall(adj, V);

    return 0;
}
