public class minValueNodeinBST {
    public static void main(String args[]) {

        //eg. BSt
        Node root=new Node(5);
        root.left=new Node(3);
        root.right=new Node(7);
        root.left.right=new Node(4);
        root.left.left=new Node(2);
        root.right.right=new Node(9);
        root.right.left=new Node(6);
    //             5
    //           /   \
    //        3        7
    //       /  \     /  \
    //    2      4   6    9

        Node min=getMin(root);
        System.out.println("min value:"+min.val);
    
    }    

    private static Node getMin(Node root) {
        if(root==null) return null; //root is null no values present in BST

        if(root.left==null) return root; //root.left is null means this is the least value as inorder taversal of BST is sorted in ascending order and the leftmost node is minimum

        return getMin(root.left);
    }
}

class Node{
    int val;
    Node left,right;

    Node(int val) { //constructor
        this.val=val;
        left=right=null;
    }
}
