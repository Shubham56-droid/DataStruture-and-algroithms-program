import {
  BFS_iterative,
  DFS_preorder_iterative,
  DFS_inorder_iterative,
  DFS_inorder_iterative_two,
  DFS_inorder_recursive,
  DFS_preorder_recursive,
  DFS_postorder_recursive,
  DFS_postorder_iterative,
} from './';

class BinaryTree {
  constructor(value, parent) {
    this.value = value;
    this.left = null;
    this.right = null;
    this.parent = parent;
  }
}

describe('traverse', () => {
  let root;

  beforeEach(() => {
    root = new BinaryTree(1, null);
    root.left = new BinaryTree(2, root);
    root.left.left = new BinaryTree(4, root.left);
    root.left.left.left = new BinaryTree(8, root.left.left);
    root.left.left.right = new BinaryTree(9, root.left.left);
    root.left.right = new BinaryTree(5, root.left);
    root.right = new BinaryTree(3, root);
    root.right.left = new BinaryTree(6, root.right);
    root.right.right = new BinaryTree(7, root.right);
  });

  describe('DFS', () => {
    describe('preOrder', () => {
      test('recursive', () => {
        expect(DFS_preorder_recursive(root)).toEqual([
          1,
          2,
          4,
          8,
          9,
          5,
          3,
          6,
          7,
        ]);
      });

      test('iterative', () => {
        expect(DFS_preorder_iterative(root)).toEqual([
          1,
          2,
          4,
          8,
          9,
          5,
          3,
          6,
          7,
        ]);
      });
    });

    describe('inOrder', () => {
      test('recursive', () => {
        expect(DFS_inorder_recursive(root)).toEqual([
          8,
          4,
          9,
          2,
          5,
          1,
          6,
          3,
          7,
        ]);
      });

      test('iterative one', () => {
        expect(DFS_inorder_iterative(root)).toEqual([
          8,
          4,
          9,
          2,
          5,
          1,
          6,
          3,
          7,
        ]);
      });

      test('iterative two', () => {
        expect(DFS_inorder_iterative_two(root)).toEqual([
          8,
          4,
          9,
          2,
          5,
          1,
          6,
          3,
          7,
        ]);
      });
    });

    describe('postOrder', () => {
      test('recursive', () => {
        expect(DFS_postorder_recursive(root)).toEqual([
          8,
          9,
          4,
          5,
          2,
          6,
          7,
          3,
          1,
        ]);
      });

      test('iterative', () => {
        expect(DFS_postorder_iterative(root)).toEqual([
          8,
          9,
          4,
          5,
          2,
          6,
          7,
          3,
          1,
        ]);
      });
    });
  });

  describe('BFS', () => {
    it('BFS_iterative', () => {
      expect(BFS_iterative(root)).toEqual([1, 3, 2, 7, 6, 5, 4, 9, 8]);
    });
  });
});
