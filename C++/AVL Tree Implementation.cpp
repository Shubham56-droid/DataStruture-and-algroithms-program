#include <iostream>
using namespace std;
template <class T>
class Node
{
public:
    Node<T> *lchild;
    int data;
    int height;
    Node<T> *rchild;
};
template <class T>
class Tree
{
public:
    Node<int> *root = NULL;

    int NodeHeight(Node<T> *p)
    {
        int hl, hr;
        hl = p && p->lchild ? p->lchild->height : 0;
        hr = p && p->rchild ? p->rchild->height : 0;
        return hl > hr ? hl + 1 : hr + 1;
    }

    int BalanceFactor(Node<T> *p)
    {
        int hl, hr;
        hl = p && p->lchild ? p->lchild->height : 0;
        hr = p && p->rchild ? p->rchild->height : 0;
        return hl - hr;
    }

    Node<T> *LLRotation(Node<T> *p)
    {
        Node<T> *pl = p->lchild;
        Node<T> *plr = pl->rchild;
        pl->rchild = p;
        p->lchild = plr;
        p->height = NodeHeight(p);
        pl->height = NodeHeight(pl);
        if (root == p)
            root = pl;
        return pl;
    }

    Node<T> *LRRotation(Node<T> *p)
    {
        Node<T> *pl = p->lchild;
        Node<T> *plr = pl->rchild;
        pl->rchild = plr->lchild;
        p->lchild = plr->rchild;
        plr->lchild = pl;
        plr->rchild = p;
        pl->height = NodeHeight(pl);
        p->height = NodeHeight(p);
        plr->height = NodeHeight(plr);
        if (root == p)
            root = plr;
        return plr;
    }

    Node<T> *RRRotation(Node<T> *p)
    {
        return NULL;
    }

    Node<T> *RLRotation(Node<T> *p)
    {
        return NULL;
    }

    Node<T> *RInsert(Node<T> *p, int key)
    {
        Node<T> *t = NULL;
        if (p == NULL)
        {
            t = new Node<T>;
            t->data = key;
            t->height = 1;
            t->lchild = t->rchild = NULL;
            return t;
        }
        if (key < p->data)
            p->lchild = RInsert(p->lchild, key);
        else if (key > p->data)
            p->rchild = RInsert(p->rchild, key);
        p->height = NodeHeight(p);
        if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
            return LLRotation(p);
        else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
            return LRRotation(p);
        else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
            return RRRotation(p);
        else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
            return RLRotation(p);
        return p;
    }

    Node<T> *Search(int key)
    {
        Node<T> *t = root;

        while (t != NULL)
        {
            if (key == t->data)
                return t;
            else if (key < t->data)
                t = t->lchild;
            else
                t = t->rchild;
        }
        return t;
    }
    void Inorder(Node<T> *p)
    {
        if (p)
        {
            Inorder(p->lchild);
            cout << p->data << " ";
            Inorder(p->rchild);
        }
    }
};
int main()
{

    Tree<int> tree;
    int choice;
    while (1)
    {
        cout << "\nOptions";
        cout << "\n\n1. Insert in Binary Search Tree";
        cout << "\n2. Search Node";
        cout << "\n3. Delete Node";
        cout << "\n4. Display Tree in Inorder";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\nEnter The Leaf Element: ";
            int n;
            cin >> n;
            if (!tree.root)
            {
                tree.root = tree.RInsert(tree.root, n);
            }
            else
            {
                tree.RInsert(tree.root, n);
            }

            break;
        }

        case 2:
        {
            cout << "\nEnter The Element you Have To Search: ";
            int n;
            cin >> n;
            Node<int> *temp = tree.Search(n);
            if (temp)
                cout << "\nElement Found ";
            else
            {
                cout << "\nElement Not Found ";
            }

            break;
        }
        case 3:
        {
            cout << "Enter Element To Delete ";
            int ele;
            cin >> ele;
            break;
        }
        case 4:
        {
            cout << "Tree Print In Inorder ";
            tree.Inorder(); //Add the required argument.
        }
        case 5:
            exit(1);
        default:
            cout << "\nWrong Option ";
            break;
        }
    }
    return 0;
}