# Python3 program to print all paths from source to destination in given graph
from typing import List
from collections import deque

 
# Utility function to check if current
# vertex is already present in path
def isVertexNotVisited(x: int, path: List[int]) -> int:
 
    size = len(path)
    for i in range(size):
        if (path[i] == x):
            return 0
             
    return 1

 
# Utility function for printing
# the found path in graph
def printpath(path: List[int]) -> None:
     
    size = len(path)
    for i in range(size):
        print(path[i], end = " ")
         
    print()

# Function for finding paths in graph from 
# source to destination
def findPathsFromSourceToDestination(graph: List[List[int]], src: int,
              dst: int, v: int) -> None:
                   
    # Create a queue which stores
    # the paths
    q = deque()
 
    # Path vector to store the current path
    path = []
    path.append(src)
    q.append(path.copy())
     
    while q:
        path = q.popleft()
        last = path[len(path) - 1]
 
        # If last vertex is the desired destination
        # then print the path
        if (last == dst):
            printpath(path)
 
        # Traverse to all the nodes connected to
        # current vertex and push new path to queue
        for i in range(len(graph[last])):
            if (isVertexNotVisited(graph[last][i], path)):
                newpath = path.copy()
                newpath.append(graph[last][i])
                q.append(newpath)
 
# Driver code
if __name__ == "__main__":
     
    # Number of vertices
    vertex = 4
    graph = [[] for _ in range(4)]
 
    # Construct a graph
    graph[0].append(1)
    graph[0].append(2)
    graph[1].append(3)
    graph[2].append(0)
    graph[2].append(1)
    graph[2].append(3)
    graph[0].append(3)
 
    source = 2
    destination = 3
    print("path from source {} to destination {} are".format(
        source, destination))
 
    # Function for finding the paths
    findPathsFromSourceToDestination(graph, source, destination, vertex)
    