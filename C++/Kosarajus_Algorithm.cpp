/*
Problem Statement:
-----------------
Find all the strongly connected components of the directed graph.
*/

#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    vector<int> *graph;

public:
    Graph(int V)
    {
        this->V = V;
        graph = new vector<int>[V];
    }

    void addEdge(int u, int v)
    {
        graph[u].push_back(v);
    }

    void dfs_stack(int source, stack<int> &s, vector<int> &visited)
    {
        visited[source] = 1;

        for (auto v : graph[source])
        {
            if (!visited[v])
                dfs_stack(v, s, visited);
        }

        s.push(source);
    }

    Graph transpose()
    {
        Graph g(V);

        for (int i = 0; i < V; i++)
            for (auto v : g.graph[i])
                g.addEdge(v, i);

        return g;
    }

    void dfs(int source, vector<int> &visited)
    {
        visited[source] = 1;
        cout << source << "  ";
        for (auto v : graph[source])
        {
            if (!visited[v])
                dfs(v, visited);
        }
    }

    void Kosarajus_Algorithm(int source)
    {
        stack<int> s;
        vector<int> visited(V, 0);

        // Using DFS to store vertices in a stack.
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
                dfs_stack(i, s, visited);
        }

        // Transposing or revesring edges of the graph.
        Graph tg = transpose();

        // Again initializing visited vector with 0 for further use.
        for (int i = 0; i < V; i++)
            visited[i] = 0;

        while (!s.empty())
        {
            int current = s.top();
            s.pop();

            if (!visited[current])
            {
                cout << "\nStrongly connected component : ";
                tg.dfs(current, visited);
            }
        }
    }
};

int main()
{
    int V = 5;
    Graph g(V);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);

    int source = 0;

    g.Kosarajus_Algorithm(source);

    return 0;
}
