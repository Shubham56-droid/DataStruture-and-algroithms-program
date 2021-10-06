import java.util.*;
class ReversePath
{
  static class node
  {
    int key;
    node left, right;
  };
  static node root = null;
  static Queue<Integer> q1;
  static int k;

  static node newNode(int item)
  {
    node temp = new node();
    temp.key = item;
    temp.left = temp.right = null;
    return temp;
  }

  static void inorder(node root)
  {
    if (root != null)
    {
      inorder(root.left);
      System.out.print(root.key + " ");
      inorder(root.right);
    }
  }

  static void reversePath(node node)
  {
    if (node == null)
      return;

    if ((node).key == k)
    {
      q1.add((node).key);
      (node).key = q1.peek();
      q1.remove();
      return;
    }
    else if (k < (node).key)
    {
      q1.add((node).key);
      reversePath((node).left);
      (node).key = q1.peek();
      q1.remove();
    }
    else if (k > (node).key)
    {
      q1.add((node).key);
      reversePath((node).right);
      (node).key = q1.peek();
 
      q1.remove();
    }

    return;
  }
  static node insert(node node, int key)
  {
    if (node == null)
      return newNode(key);

    if (key < node.key)
      node.left = insert(node.left, key);
    else if (key > node.key)
      node.right = insert(node.right, key);
 
    return node;
  }
 
  public static void main(String[] args)
  {
    q1 = new LinkedList<>();

    k = 80;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    System.out.print("Before Reverse :"
                     + "\n");
    inorder(root);
    System.out.print("\n");

    reversePath(root);
    System.out.print("After Reverse :"
                     + "\n");
     inorder(root);
  }
}