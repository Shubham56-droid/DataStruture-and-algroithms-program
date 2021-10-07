//merge two binary trees
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if ( (t1!=nullptr)&&(t2!=nullptr))
        {
            TreeNode * root = new TreeNode(t1->val + t2->val);
            root->left = mergeTrees(t1->left, t2->left);
            root->right = mergeTrees(t1->right, t2->right);
            return root;
        } 
    else {
            return t1 ? t1 : t2;
        }
   }
}
