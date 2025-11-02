#include <iostream>
using namespace std;

class Graph {
    int vertices;              // Stores number of vertices
    int adjMatrix[10][10];     // Adjacency matrix for graph
    int visited[10];           // Marks visited nodes

public:
    // Function to read graph details
    void readGraph() {
        int edges;
        cout << "\nEnter number of vertices: ";
        cin >> vertices;

        // Initialize matrix and visited array to 0
        for (int i = 1; i <= vertices; i++) {
            for (int j = 1; j <= vertices; j++) {
                adjMatrix[i][j] = 0;
            }
            visited[i] = 0;
        }

        cout << "Enter number of edges: ";
        cin >> edges;

        cout << "Enter edges (u v):\n";
        for (int k = 0; k < edges; k++) {
            int u, v;
            cin >> u >> v;
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1; // Because the graph is undirected
        }
    }

    // Function for Depth First Search
    void dfs(int node) {
        cout << node << " ";   // Print the current node
        visited[node] = 1;     // Mark it as visited

        // Visit all connected vertices of this node
        for (int i = 1; i <= vertices; i++) {
            // If there is a connection and the node is not yet visited
            if (adjMatrix[node][i] == 1 && visited[i] == 0) {
                dfs(i); // Recursive DFS call
            }
        }
    }

    // Function to start DFS traversal
    void performDFS() {
        int start;
        cout << "\nEnter starting vertex: ";
        cin >> start;
        cout << "DFS Traversal: ";
        dfs(start);
        cout << endl;
    }
};

int main() {
    cout << "Name: Sammrudhi Kulkarni   PRN: B24CE1125" << endl;

    Graph g;
    g.readGraph();
    g.performDFS();  // Perform DFS traversal

    return 0;
}



