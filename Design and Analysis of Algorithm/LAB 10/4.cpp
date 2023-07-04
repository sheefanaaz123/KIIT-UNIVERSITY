#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;

// Number of vertices in the graph
#define V 4

// Function to find the minimum distance vertex from the set of vertices not yet included in the minimum spanning tree
int minDistance(vector<int> dist, vector<bool> sptSet)
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

// Function to print the final path
void printPath(vector<int> parent, int j)
{
    if (parent[j] == -1)
        return;
    printPath(parent, parent[j]);
    cout << j << " ";
}

// Function to print the minimum cost and the path
void printSolution(int dist, vector<int> parent)
{
    cout << "Minimum cost: " << dist << endl;
    cout << "Path taken: ";
    printPath(parent, V - 1);
    cout << "0" << endl;
}

// Function to implement the Travelling Salesman Problem using Branch and Bound and Dynamic Programming
void tsp(int graph[][V])
{
    vector<int> parent(V, -1); // Array to store the parent node of each vertex in the path
    vector<int> dist(V, INT_MAX); // Array to store the minimum distance of each vertex from the starting vertex
    vector<bool> sptSet(V, false); // Array to store the visited vertices

    // Distance of starting vertex from itself is always 0
    dist[0] = 0;

    // Calculate the minimum distance for each vertex from the starting vertex
    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
            {
                parent[v] = u;
                dist[v] = dist[u] + graph[u][v];
            }
    }

    // Add the cost of returning to the starting vertex
    dist[V - 1] += graph[V - 1][0];

    // Print the minimum cost and the path
    printSolution(dist[V - 1], parent);
}

int main()
{
    int graph[][V] = { { 0, 16, 11, 6 },
                       { 8, 0, 13, 16 },
                       { 4, 7, 0, 9 },
                       { 5, 12, 2, 0 } };

    tsp(graph);
    return 0;
}

