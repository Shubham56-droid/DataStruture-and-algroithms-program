//Name:Jyoti Kumari
//https://github.com/jyoti21266

//Program to find mother vertex in a graph.
//Time Complexity:O(V+E)

/*Explaination:We do DFS traversal of graph and keep track of last visited node.
               If the vertex is a mother vertex then it has only one visited node then check whether it is mother vertex by doing DFS/BFS.
               This idea is based on "Kosaraju strongly connected component algorithm".
                In a graph of strongly connected components, mother vertices are always
                 vertices of source component in component graph. */


//Program:
#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;//total vertex in graph    
    list<int> *adj;    // adjacency lists
 
    void DFS(int v, vector<bool> &visited);
public:
    Graph(int V);
    void addEdge(int v, int w);
    int motherVertex();
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 

void Graph::DFS(int v, vector<bool> &visited)
{
    // Mark the current node as visited
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i, visited);
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 

int Graph::motherVertex()
{
   
    vector <bool> visited(V, false);
 
    
    int v = 0; //for storing last visited node.
 
    
    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            DFS(i, visited);
            v = i;
        }
    }
 
    
    fill(visited.begin(), visited.end(), false); //initialize visited vector as false.
    DFS(v, visited);//then we do dfs starting from 'v' which we found earlier.
    for (int i=0; i<V; i++)
        if (visited[i] == false)
            return -1;
 
    return v;
    // Returns a mother vertex if exists. Otherwise returns -1
}
 

int main()
{
   
    int n,v,w;
    cout<<"enter number of nodes";
    cin>>n;
    Graph g(n); 
    for(int i=0;i<n;i++){
        cin>>v>>w;  //v and w are connections between the two nodes.
    g.addEdge(v, w);
    }
 
    cout << "A mother vertex is " << g.motherVertex();
 
    return 0;
}
