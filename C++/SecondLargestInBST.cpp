#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
    int key;
    Node *left, *right;
};
 
Node *newNode(int item)
{
    Node *temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
 
void secondLargestUtil(Node *root, int &c)
{
    if (root == NULL || c >= 2)
        return;
 
    secondLargestUtil(root->right, c);
 
    c++;
 
    if (c == 2)
    {
        cout << "2nd largest element is "
             << root->key << endl;
        return;
    }
 
    secondLargestUtil(root->left, c);
}
 
void secondLargest(Node *root)
{
    int c = 0;
 
    secondLargestUtil(root, c);
}
 
Node* insert(Node* node, int key)
{
    if (node == NULL) return newNode(key);
 
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    return node;
}
 
int main()
{
    Node *root = NULL;
    int n;
    cin >> n;
    vector <int> v(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v[i] = x;
    }

    root = insert(root, v[0]);
    for(int i=1;i<n;i++){
        insert(root, v[i]);
    }
 
    secondLargest(root);
 
    return 0;
}