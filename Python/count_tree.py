'''
Program to count number of trees in a forest. 

Approach:

The idea is to apply Depth First Search on every node. 
If every connected node is visited from one source then increment count by one. 
If some nodes yet not visited again perform DFS traversal. 
Return the count.

Example: 
Input :  edges[] = {0, 1}, {0, 2}, {3, 4}
Output : 2
Explanation : There are 2 trees
                   0       3
                  / \       \
                 1   2       4

Input :  edges[] = {0, 1}, {0, 2}, {3, 4}, {5, 6}
Output : 3
Explanation : There are 3 trees
                   0       3      5
                  / \       \      \
                 1   2       4      6

'''

def Insert_Edge(Graph, u, v): 
    Graph[u].append(v) 
    Graph[v].append(u) 

def Depth_First_Search_Traversal(u, Graph, Check_visited): 
    Check_visited[u] = True
    for i in range(len(Graph[u])): 
        if (Check_visited[Graph[u][i]] == False): 
            Depth_First_Search_Traversal(Graph[u][i], Graph, Check_visited) 

def Count_Tree(Graph, V): 
    Check_visited = [False] * V 
    res = 0
    for u in range(V): 
        if (Check_visited[u] == False): 
            Depth_First_Search_Traversal(u, Graph, Check_visited) 
            res += 1
    return res 

# Driver code 
if __name__ == '__main__': 

    V = 7
    Graph = [[] for i in range(V)] 
    Insert_Edge(Graph, 0, 1) 
    Insert_Edge(Graph, 0, 2) 
    Insert_Edge(Graph, 3, 4)
    Insert_Edge(Graph, 5, 6) 
    print(Count_Tree(Graph, V))