/*


            1
          /   \
        2      3
      /  \    /  \
    4     5  6    7
  /  \
8     9


Inorder (Left, Root, Right) : [8, 4, 9, 2, 5, 1, 6, 3, 7]
Preorder (Root, Left, Right) : [1, 2, 4, 8, 9, 5, 3, 6, 7]
Postorder (Left, Right, Root) : 4 5 2 3 1

*/

export function BFS_iterative(root) {
  const queue = [root];
  const res = [];

  while (queue.length) {
    const curr = queue.shift();
    res.push(curr.value);

    if (curr.right) {
      queue.push(curr.right);
    }

    if (curr.left) {
      queue.push(curr.left);
    }
  }

  return res;
}

export function DFS_preorder_iterative(root) {
  const stack = [root];
  const res = [];

  while (stack.length) {
    const curr = stack.pop();
    res.push(curr.value);

    if (curr.right) {
      stack.push(curr.right);
    }

    if (curr.left) {
      stack.push(curr.left);
    }
  }

  return res;
}

export function DFS_inorder_iterative(root) {
  const res = [];

  let previousNode = null;
  let currentNode = root;
  while (currentNode !== null) {
    let nextNode;
    if (previousNode === null || previousNode === currentNode.parent) {
      if (currentNode.left !== null) {
        nextNode = currentNode.left;
      } else {
        res.push(currentNode.value);
        nextNode =
          currentNode.right !== null ? currentNode.right : currentNode.parent;
      }
    } else if (previousNode === currentNode.left) {
      res.push(currentNode.value);
      nextNode =
        currentNode.right !== null ? currentNode.right : currentNode.parent;
    } else {
      nextNode = currentNode.parent;
    }
    previousNode = currentNode;
    currentNode = nextNode;
  }

  return res;
}

export function DFS_inorder_iterative_two(root) {
  const callStack = [];
  let current = root;
  const res = [];
  while (true) {
    while (current) {
      callStack.push(current);
      current = current.left;
    }
    if (callStack.length == 0) break;
    const lastCurrent = callStack.pop();
    res.push(lastCurrent.value);
    current = lastCurrent.right;
  }
  return res;
}

export function DFS_postorder_iterative(root) {
  const res = [];

  let previousNode = null;
  let currentNode = root;
  while (currentNode !== null) {
    let nextNode;
    if (previousNode === null || previousNode === currentNode.parent) {
      if (currentNode.left !== null) {
        nextNode = currentNode.left;
      } else {
        res.push(currentNode.value);
        nextNode = currentNode.parent;
      }
    } else if (previousNode === currentNode.left) {
      if (currentNode.right !== null) {
        nextNode = currentNode.right;
      } else {
        res.push(currentNode.value);
        nextNode =
          currentNode.right !== null ? currentNode.right : currentNode.parent;
      }
    } else {
      res.push(currentNode.value);
      nextNode = currentNode.parent;
    }
    previousNode = currentNode;
    currentNode = nextNode;
  }

  return res;
}

export function DFS_inorder_recursive(root) {
  const res = [];
  const current = root;

  const traverse = (node) => {
    if (!node) return null;
    traverse(node.left);
    res.push(node.value);
    traverse(node.right);
  };

  traverse(current);
  return res;
}

export function DFS_preorder_recursive(root) {
  const res = [];
  const current = root;

  const traverse = (node) => {
    res.push(node.value);
    if (node.left) traverse(node.left);
    if (node.right) traverse(node.right);
  };

  traverse(current);
  return res;
}

export function DFS_postorder_recursive(root) {
  const res = [];
  const current = root;

  const traverse = (node) => {
    if (node.left) traverse(node.left);
    if (node.right) traverse(node.right);
    res.push(node.value);
  };

  traverse(current);
  return res;
}
