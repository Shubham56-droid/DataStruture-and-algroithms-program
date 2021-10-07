class Node:
 
    # Constructor -> create a new node
    def __init__(self, data):
        self.key = data
        self.left = None
        self.right = None
         
def secondLargestUtil(root, c):
    if root == None or c[0] >= 2:
        return
    secondLargestUtil(root.right, c)
    c[0] += 1
    if c[0] == 2:
        print("Answer: ", root.key)
        return
    secondLargestUtil(root.left, c)
 
# Function to find 2nd largest element
def secondLargest(root):
    c = [0]
    secondLargestUtil(root, c)
    
def insert(node, key):
    if node == None:
        return Node(key)
    if key < node.key:
        node.left = insert(node.left, key)
    elif key > node.key:
        node.right = insert(node.right, key)
    return node
 
# Main
if __name__ == '__main__':

    root = None
    root = insert(root, 50)
    insert(root, 30)
    insert(root, 70)
    insert(root, 40)
    insert(root, 20)
    insert(root, 60)
    insert(root, 10)
 
    secondLargest(root)
