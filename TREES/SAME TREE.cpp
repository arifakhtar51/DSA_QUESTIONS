class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((p==0 && q!=0 )||(p!=0 && q==0)){
            return 0;
        }
         if(p==0 && q==0){
            return 1;
        }
        if(p->val!=q->val){
            return 0;
        }
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};

