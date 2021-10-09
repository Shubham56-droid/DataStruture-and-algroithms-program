#include <bits/stdc++.h>
using namespace std;

struct node
{
    int u;
    int v;
    int wt;
    node(int first, int second, int weight)
    {
        u = first;
        v = second;
        wt = weight;
    }
};

int main()
{
    int n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    vector<node> edges;

    // take edges as input
    cout << "Enter the edges along with weight of the graph\n";
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }
    int source;
    cout << "Enter source for graph: ";
    cin >> source;

    int infinity = INT_MAX;

    // Graph starts from 0
    vector<int> distance(n, infinity);

    // Graph starts from 1
    // vector<int> distance(n + 1, infinity);

    distance[source] = 0;

    // Relaxing the edges for n-1 times
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto it : edges)
        {
            if (distance[it.u] + it.wt < distance[it.v])
            {
                distance[it.v] = distance[it.u] + it.wt;
            }
        }
    }

    int flag = 0;
    for (auto it : edges)
    {
        if (distance[it.u] + it.wt < distance[it.v])
        {
            cout << "Negative Cycle";
            flag = 1;
            break;
        }
    }

    // Graph starts from 0
    if (!flag)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " " << distance[i] << endl;
        }
    }

    // Graph starts from 1
    // if (!flag)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         cout << i << " " << distance[i] << endl;
    //     }
    // }

    return 0;
}