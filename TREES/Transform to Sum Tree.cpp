
class Solution {
  public:
  int  solve(Node *root){
       if(root==NULL)return 0;
        int l=solve(root->left);
        int r=solve(root->right);
        int x=root->data;
        root->data=l+r;
        return x+root->data;
  }
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *root)
    {
        // Your code here
        solve(root);
        return ;
        
    }
};
