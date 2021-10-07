import java.util.*;

public class sameSetOfElementsInBST {
    public static void main(String args[]) {
                //eg. BST 1
                Node root1=new Node(5);
                root1.left=new Node(3);
                root1.right=new Node(7);
                root1.left.right=new Node(4);
                root1.left.left=new Node(2);
                root1.right.right=new Node(9);
                root1.right.left=new Node(6);
            //             5
            //           /   \
            //        3        7
            //       /  \     /  \
            //    2      4   6    9

                //eg. BST 2
                Node root2=new Node(5);
                root2.left=new Node(3);
                root2.right=new Node(7);
                root2.left.right=new Node(4);
                root2.left.left=new Node(1);
                root2.right.right=new Node(9);
                root2.right.left=new Node(6);
            //             5
            //           /   \
            //        3        7
            //       /  \     /  \
            //    1      4   6    9

            boolean isSame=isSameSetOfElements(root1, root2);
            System.out.println("Same set of elements are present->"+isSame);
    }
    
    private static boolean isSameSetOfElements(Node root1,Node root2) {
        if(root1==null && root2==null) return true;
        
        if(root1==null || root2==null) return false;

        List<Node> l1=new ArrayList<>();
        List<Node> l2=new ArrayList<>();
        inOrderTraversal(root1, l1);
        inOrderTraversal(root2, l2);
        
        //inOrder traversal of BST is sorted so if same set of elements are present then the two lists should have same elements

        if(l1.size()!=l2.size()) return false;
        else {
            boolean same=true;
            for(int i=0;i<l1.size();i++) {
                if(l1.get(i).val!=l2.get(i).val) {
                    same=false;
                    break;
                }
            }
            return same;
        }
    }

    private static void inOrderTraversal(Node root,List<Node> list) {
        //inOrder traversal of BST is sorted in ascending order
        if(root==null) return;

        inOrderTraversal(root.left, list);
        list.add(root);
        inOrderTraversal(root.right, list);
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