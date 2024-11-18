#include <iostream>
using namespace std;

void computeReachability(int **graph, int n) {
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {  
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]); 
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;


    int **graph = new int *[n];
    for (int i = 0; i < n; i++) {
        graph[i] = new int[n];
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0; 
        }
    }

    
    cout << "Enter the adjacency matrix (0 or 1):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j]; // Input 0 or 1
        }
    }

    
    computeReachability(graph, n);

    
    cout << "Reachability matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j] << " "; 
        }
        cout << endl;
    }

  
    for (int i = 0; i < n; i++) {
        delete[] graph[i];
    }
    delete[] graph;

    return 0;
}

