// CPP program to count number of trees in
// a forest.
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to do DFS of graph
// recursively from a given vertex u.
void DFSUtil(int u, vector<int> adj[],
					vector<bool> &visited)
{
	visited[u] = true;
	for (int i=0; i<adj[u].size(); i++)
		if (visited[adj[u][i]] == false)
			DFSUtil(adj[u][i], adj, visited);
}

// Returns count of tree is the forest
// given as adjacency list.
int countTrees(vector<int> adj[], int V)
{
	vector<bool> visited(V, false);
	int res = 0;
	for (int u=0; u<V; u++)
	{
		if (visited[u] == false)
		{
			DFSUtil(u, adj, visited);
			res++;
		}
	}
	return res;
}

// Driver code
int main()
{
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 3, 4);
	cout << countTrees(adj, V);
	return 0;
}
