class Solution {
public:
int height( TreeNode* root){
        // code here 
    
        if(root==NULL)
            return 0;
        int l=height(root->left);
       
        int r=height(root->right);
        return max(l,r)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return 1;
        }
        int l=height(root->left);
        int r=height(root->right);

        bool ans1=abs(l-r)<=1;
       
        
        bool ans2=isBalanced(root->left);
        bool ans3=isBalanced(root->right);
        if(ans1 && ans2 && ans3){
            return 1;
        }
            return 0;
        
        
        
    }
};

