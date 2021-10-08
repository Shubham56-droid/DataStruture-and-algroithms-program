from collections import defaultdict 
 
class Graph: 
   
    def __init__(self,vertices): 
        self.V= vertices  
          
        
        self.graph = defaultdict(list)  
    
    def addEdge(self,u,v): 
        self.graph[u].append(v) 
   
    def printAllPathsUtil(self, u, d, visited, path): 
  
        visited[u]= True
        path.append(u) 
  
        if u ==d: 
            print path 
        else: 
            
            for i in self.graph[u]: 
                if visited[i]==False: 
                    self.printAllPathsUtil(i, d, visited, path) 
                      
        path.pop() 
        visited[u]= False
   
    def printAllPaths(self,s, d): 
  
        visited =[False]*(self.V) 
  
        path = []  
        self.printAllPathsUtil(s, d,visited, path) 
   
g = Graph(4) 
g.addEdge(0, 1) 
g.addEdge(0, 2) 
g.addEdge(0, 3) 
g.addEdge(2, 0) 
g.addEdge(2, 1) 
g.addEdge(1, 3) 
   
s = 2 ; d = 3
print ("Paths from node %d to %d : " %(s, d)) 
g.printAllPaths(s, d)
