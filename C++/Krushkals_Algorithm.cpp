/*
Problem Statement:
-----------------
Find a minimum spanning tree of given undirected edge-weighted graph.
*/

#include <bits/stdc++.h>
using namespace std;

#define INF 9999999
#define V 5

int graph[V][V] = {{0, 2, 0, 6, 0},
                   {2, 0, 3, 8, 5},
                   {0, 3, 0, 0, 7},
                   {6, 8, 0, 0, 9},
                   {0, 5, 7, 9, 0}};

void KrushkalsAlgorithm(vector<int> &distance, vector<int> &parent, int source)
{
    int edges = 0;
    distance[source] = 0;

    while (edges < V - 1)
    {
        for (int i = 1; i < V; i++)
            for (int j = 1; j <= V; j++)
                if (graph[i][j] != 0 and (graph[i][j] < distance[j]))
                {
                    distance[j] = graph[i][j];
                    parent[j] = j;
                }
        edges++;
    }

    for (int i = 1; i <= V; i++)
        cout << "\nDistance of " << source << " to " << i << " is : " << distance[i];

    for (int i = 0; i < V; i++)
        cout << "Parent of " << i << " is : " << parent[i] << " and Distance : " << distance[i] << endl;
}

int main()
{
    vector<int> distance(V, INF);
    vector<int> parent(V, -1);
    //vector<int> visited(V, 0);

    KrushkalsAlgorithm(distance, parent, 0);

    return 0;
}
