#include <iostream>
using namespace std;

// Define a structure to represent an edge in the graph
struct Edge {
    int source, dest, weight;
};

int main() {
    // Define the number of vertices and edges
    int V = 4;  // Number of vertices
    int E = 5;  // Number of edges

    // Create an array of Edge structures to store the graph
    Edge edges[E];

    // Adding edges to the graph
    edges[0] = {0, 1, 10};  // Edge from vertex 0 to 1 with weight 10
    edges[1] = {0, 2, 6};   // Edge from vertex 0 to 2 with weight 6
    edges[2] = {0, 3, 5};   // Edge from vertex 0 to 3 with weight 5
    edges[3] = {1, 3, 15};  // Edge from vertex 1 to 3 with weight 15
    edges[4] = {2, 3, 4};   // Edge from vertex 2 to 3 with weight 4

    // Print the graph
    cout << "Graph representation using an array of edges:" << endl;
    for (int i = 0; i < E; i++) {
        cout << "Edge " << i << ": ";
        cout << edges[i].source << " -> " << edges[i].dest;
        cout << " with weight " << edges[i].weight << endl;
    }
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}
