class node:
	def __init__(self,data):
		self.left=None
		self.right=None
		self.data=data
		
#inserting nodes according to BST rule

def insert(root,node):
	if root==None:
		root=node
	else:
		if root.data<node.data:
			if root.right==None:
				root.right=node
			else:
				insert(root.right,node)
		
		else:
			if root.left==None:
				root.left=node
			else:
				insert(root.left,node)
				
#using inorder traversal of BST which will give increasing order of the elements present in BST

def inorder(root):
	if root:
		inorder(root.left)
		l.append(root.data)
		inorder(root.right)
		
#creating and implementing bst		
r=node(8)
insert(r,node(4))
insert(r,node(10)) 
insert(r,node(3)) 
insert(r,node(7)) 
insert(r,node(13)) 
insert(r,node(3))
insert(r,node(6))
insert(r,node(12))

inorder(r)

x=len(l)

print("Second largest element:",l[x-2])
