/* A Binary Tree node
class Node
{
    int data;
    Node left, right;
    Node(int item)
    {
        data = item;
        left = right = null;
    }
}*/
class Tree
{
    static int maxLevel;
    static void traverse(Node root, ArrayList<Integer> leftNodes, int level){
        if(root == null){
            return;
        }
        if(level > maxLevel){
            leftNodes.add(root.data);
            maxLevel = level;
        }
        
        traverse(root.left,leftNodes,level+1);
        traverse(root.right, leftNodes,level+1);
    }
    
    //Function to return list containing elements of left view of binary tree.
    ArrayList<Integer> leftView(Node root)
    {
      // Your code here
      ArrayList<Integer> leftNodes = new ArrayList<Integer>();
      int level = 0;
      maxLevel = -1;
      traverse(root, leftNodes, level);
      return leftNodes;
    }
}
