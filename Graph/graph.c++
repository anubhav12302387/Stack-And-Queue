// #include<stdio.h>
// #include<iostream>
// using namespace std;

// #define MAX_V 100

// void enqueue(int* queue, int &rear, int vertex){
//     queue[++rear] = vertex;
// }

// int dequeue(int * queue, int &front){
//     return queue[++front];
// }

// void bfsOfGraph(int V, int adjList[MAX_V][MAX_V]){
//     int visited[MAX_V] = {0};
//     int queue[MAX_V];
//     int front = 0, rear = 0;


//     int startVertex = 0;
//     enqueue(queue, rear, startVertex);
//     visited[startVertex] = 1;

//     while (front < rear) {
//         int CurrVertex = dequeue(queue, front);

//         cout << CurrVertex << " ";

//         for(int i = 0; i < V; ++i){
//             if(adjList[CurrVertex][i] == 1 && visited[i] == 0){
//                 enqueue(queue, rear, i);
//                 visited[i] = 1;
//             }
//         }
//     }
// }

// int main(){
//     int V, E;
//     cin >> V >> E;

//     int adjList[MAX_V][MAX_V] = {0};

//     for(int i = 0; i<E;++i){
//         int u,v;
//         cin >> u >> v;
//         adjList[u][v] = 1
//     }

//     bfsOfGraph(V, adjList);
//     return 0;
// } 



#include<iostream>
using namespace std;
#define MAX_Vertices 100

void addEdge(int adj[MAX_Vertices][MAX_Vertices], int v, int w){
    adj[v][w] = 1;
}


void DFS(int adj[MAX_Vertices][MAX_Vertices], int visited[MAX_Vertices], int V, int v){
    visited[v] = 1;
    cout << v <<" ";

    for(int i = 0;i < V; i++){
        if(adj[v][i] == 1 && visited[i] == 0){
            DFS(adj,visited,v,i);
        }
    }
}


int main(){
    int V, E;

    int adj{MAX_Vertices}[MAX_Vertices] = {0};
    int visited[MAX_Vertices]={0};

    for(int i=0;i<E;++i){
        int v, w;
        cin>>V>>w;
        addEdge(adj, v, w);
    }

    int startVertex;
    cin >> startVertex;

    cout << "Depth First Traversal starting from vertex " << startVertex << ":\n";
    DFS(adj, visited, V, startVertex);

    
    return 0;
}