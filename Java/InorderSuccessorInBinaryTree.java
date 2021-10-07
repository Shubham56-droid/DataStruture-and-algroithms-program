public class InorderSuccessorInBinaryTree {
 
    public static class Node {
        int data;
        Node left;
        Node right;
 
        public Node(int data) {
            this.data = data;
        }
 
        public String toString() {
            return data + "";
        }
    }
 
    public static Node root;
 
    public static void main(String[] args) {
 
        root = new Node(6);
        root. left = new Node(4);
        root. right = new Node(10);
        root. left. left = new Node(1);
        root. left. right = new Node(5);
        root. right. right = new Node(12);
        root. right. left = new Node(8);
        root. right. left. left = new Node(7);
        root. right. left. right = new Node(9);
 
        /*for any rightmost node of a tree which is also the greatest
         * node in a tree, Inorder successor can not exist as it is
         * the very last node to get visited in the inorder */
        System.out.println(getJustLarger(root, 9));
    }
 
    public static int getJustLarger(Node node, int target) {
        /* return a maximum value in the basecase so that it
         * can not be able to update final answer to be returned */
        if (node == null)
            return Integer.MAX_VALUE;
 
        /* result of recursive call to left subtree*/
        int lr = getJustLarger(node.left, target);
        /* result of recursive call to left subtree*/
        int rr = getJustLarger(node.right, target);
 
        /*final answer to be returned*/
        int rv = Integer.MAX_VALUE;
 
        /* if the current node value is greater than target and
         * it is lesser than the greater values (greater than target
         * node value) explored till now, then update the final
         * answer to be returned*/
        if (node.data > target && node.data < rv) {
            rv = node.data;
        }
 
        /* if the result of Left recursive call is greater than target and
         * it is lesser than the greater values explored till now,
         * then update the final answer to be returned*/
        if (lr > target && lr < rv) {
            rv = lr;
        }
        /* if the result of Right recursive call is greater than target and
         * it is lesser than the greater values explored till now,
         * then update the final answer to be returned*/
 
        if (rr > target && rr < rv) {
            rv = rr;
        }
        return rv;
 
    }
 
