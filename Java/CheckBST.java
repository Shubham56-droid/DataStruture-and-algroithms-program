
public class Solution
{
    static boolean BSTUtil(Node root, int min, int max){
        if(root == null){
            return true;
        }
        
        if(root.data < min || root.data > max){
            return false;
        }
        
        return (BSTUtil(root.left, min, root.data-1) && BSTUtil(root.right,root.data+1,max));
    }
    
    
    //Function to check whether a Binary Tree is BST or not.
    boolean isBST(Node root)
    {
        // code here.
        int min = Integer.MIN_VALUE,max = Integer.MAX_VALUE;
        if(BSTUtil(root,min,max)){
            return true;
        }
        else{
            return false;
        }
    }
}
