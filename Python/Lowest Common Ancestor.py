class TreeNode:
   def __init__(self, data, left = None, right = None):
      self.data = data
      self.left = left
      self.right = right
class Solution():
   def lowestCommonAncestor(self, root, p, q):
      if not root:
         return None
      if p == root or q==root:
         return root
      left = self.lowestCommonAncestor(root.left, p, q)
      right = self.lowestCommonAncestor(root.right, p, q)
      if left and right:
         return root
      return left or right
def insert(temp,data):
   que = []
   que.append(temp)
   while (len(que)):
      temp = que[0]
      que.pop(0)
      if (not temp.left):
         temp.left = TreeNode(data)
         break
      else:
         que.append(temp.left)
      if (not temp.right):
         temp.right = TreeNode(data)
         break
      else:
         que.append(temp.right)
def make_tree(elements):
   Tree = TreeNode(elements[0])
   for element in elements[1:]:
      insert(Tree, element)
   return Tree
def search_node(root, element):
   if (root == None):
      return None
   if (root.data == element):
      return root
   res1 = search_node(root.left, element)
   if res1:
      return res1
   res2 = search_node(root.right, element)
   return res2

root = make_tree([7,3,7,0,5,7,9,None,None,3,5])
ob1 = Solution()
op = ob1.lowestCommonAncestor(root, search_node(root, 2), search_node(root, 8))
print(op.data)
