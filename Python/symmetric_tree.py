'''
Given a binary tree:

check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:
    1
   / \
  2   2
 / \ / \
3  4 4  3

the following [1,2,2,null,3,null,3] is not:
    1
   / \
  2   2
   \   \
   3    3

Problem Solution
A tree is symmetric if the left subtree is a mirror reflection of the right subtree.

Two trees are a mirror reflection of each other if:

    1. Their two roots have the same value.
    2. The right subtree of each tree is a mirror reflection of the left subtree of the other tree.

We can use recursive approach to solve the problem.

We will go on recursively checking on the left and right half of the tree if there are equal or not,
we can do this by using a helper function which will have root->left and root->right as its parameter. 

In this process, we will have three cases-

    1. If Both the left and the right subtree are NULL then we will return True.
    2. If anyone of them is NULL and the other is not this means they are not symmetrically equal to each other so we return false.
    3. If the value at particle node in the left subtree is not equal to the value in the right subtree then we have to return false.

'''
class Node: 
    def __init__(self, val): 
        self.val = val 
        self.left = None
        self.right = None
  

def isMirror(root1 , root2): 
    if root1==None and root2==None: 
        return True 
      
    if (root1 != None and root2 != None): 
            if  root1.val == root2.val: 
                return (isMirror(root1.left, root2.right) and isMirror(root1.right, root2.left)) #recursive call 
  
    return False

 
def isSymmetric(root): 
  
    return isMirror(root, root) 

#provide inputs to class Node 

#this binary tree root1 [1,2,2,3,4,4,3] is symmetric
root1 = Node(1) 
root1.left = Node(2) 
root1.right = Node(2) 
root1.left.left = Node(3) 
root1.left.right = Node(4) 
root1.right.left = Node(4) 
root1.right.right = Node(3) 

# this binary tree root2 [1,2,2,null,3,null,3] is not symmetric
root2 = Node(1) 
root2.left = Node(2) 
root2.right = Node(2) 
root2.left.left = Node(None) 
root2.left.right = Node(3) 
root2.right.left = Node(None) 
root2.right.right = Node(3)

if isSymmetric(root1):
    print("Tree is symmetric")
else:
    print("Tree is asymmetric")

if isSymmetric(root2):
    print("Tree is symmetric")
else:
    print("Tree is asymmetric")