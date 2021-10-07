int getSum(BinaryTreeNode<int>* root) {
   if(root==NULL){
       return 0;
   }
 	int sum=root->data;
      queue<BinaryTreeNode<int>*> pending;
       pending.push(root);
       while(pending.size()!=0){
           BinaryTreeNode<int>* front=pending.front();
           pending.pop();
           if(front->left!=NULL){
               sum=sum+front->left->data;
               pending.push(front->left);
           }
           if(front->right!=NULL){
               sum=sum+front->right->data;
               pending.push(front->right);
           }
       }
       return sum;
    // Write your code here
   }
