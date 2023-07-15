//,1
void solve(TreeNode* root, vector<int>&arr){
    if(!root)return ;
    
    solve(root->left,arr);
    arr.push_back(root->val);
    solve(root->right,arr);


}
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        solve(root,arr);
        return arr[k-1];
    }

//M2
void solve(TreeNode* root, int &k,int &ans){
     
    if(root==NULL){
        return ;
    }
   
    solve(root->left,k,ans);
    k--;
    if(k==0){
        //cout<<"ROOT ROOT DATA YE MILA YE MILA-> "<<root->val<<endl;
        ans=root->val;
     cout<<root->val;
    }
    solve(root->right,k,ans);
}
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
         solve(root,k,ans);
        return ans;

        
    }
