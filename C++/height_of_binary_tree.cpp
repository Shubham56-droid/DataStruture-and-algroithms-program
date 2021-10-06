// C++ program to find height of tree
#include <bits/stdc++.h>
using namespace std;
 
class node
{
    public:
    int data;
    node* left;
    node* right;
};
 

int maxDepth(node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        return max(lDepth,rDepth)+1;
    }
}
 
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
     
    return(Node);
}
     

int main()
{
    node *root = newNode(1);
 
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
     
    cout << "Height of tree is " << maxDepth(root);
    return 0;
}