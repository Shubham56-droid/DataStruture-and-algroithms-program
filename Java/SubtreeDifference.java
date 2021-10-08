import java.util.ArrayList;

class Graph
{

  static int res;

  static void dfs (int u, int parent, int totalSum,
		   ArrayList < Integer >[]edge, int subtree[])
  {
    int sum = subtree[u];

    for (int i = 0; i < edge[u].size (); i++)
      {
	int v = edge[u].get (i);

	if (v != parent)
	  {
	    dfs (v, u, totalSum, edge, subtree);
	    sum += subtree[v];
	  }
      }

    subtree[u] = sum;

    if (u != 0 && Math.abs (totalSum - 2 * sum) < res)
      res = Math.abs (totalSum - 2 * sum);
  }

  static int getMinSubtreeSumDifference (int vertex[], int[][]edges, int N)
  {
    int totalSum = 0;
    int[] subtree = new int[N];

    for (int i = 0; i < N; i++)
      {
	subtree[i] = vertex[i];
	totalSum += vertex[i];
      }

    @SuppressWarnings ("unchecked")
      ArrayList < Integer >[]edge = new ArrayList[N];
    for (int i = 0; i < N; i++)
      {
	edge[i] = new ArrayList <> ();
      }
    for (int i = 0; i < N - 1; i++)
      {
	edge[edges[i][0]].add (edges[i][1]);
	edge[edges[i][1]].add (edges[i][0]);
      }

    dfs (0, -1, totalSum, edge, subtree);
    return res;
  }

  public static void main (String[]args)
  {
    res = Integer.MAX_VALUE;

    int[] vertex = { 4, 2, 1, 6, 3, 5, 2 };
    int[][] edges = { {0, 1}, {0, 2},
    {0, 3}, {2, 4},
    {2, 5}, {3, 6}
    };
    int N = vertex.length;

    System.out.println (getMinSubtreeSumDifference (vertex, edges, N));
  }
}
