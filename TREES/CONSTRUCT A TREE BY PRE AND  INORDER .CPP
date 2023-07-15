class Solution {
public:
int findpos(vector<int>& preorder,int ele){
    for(int i=0;i<preorder.size();i++){
        if(preorder[i]==ele)return i;
    }
    return -1;
}
TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int n,int&preIndex,int inorderStart,int inorderEnd){
    //base case
    if(preIndex>=n || inorderStart>inorderEnd   ){
        return NULL;
    }

    int ele=preorder[preIndex++];
    TreeNode* root=new TreeNode(ele);
    int i=findpos(inorder,ele);
    root->left=solve(preorder,inorder,n,preIndex,inorderStart,i-1);

    root->right=solve(preorder,inorder,n,preIndex,i+1,inorderEnd);

    return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
    int n=preorder.size();
    int preorderIndex=0;
    TreeNode*ans= solve(preorder,inorder,n,preorderIndex,0,n);
    return ans;
        
    }
};
