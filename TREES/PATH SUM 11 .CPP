class Solution {
public:
  WHEN TEMP PASS BY VALUE SO SPACE WILL ALSO INCRESES
void solve(TreeNode* root, int targetSum,vector<vector<int>> &ans,vector<int> temp,int sm){
  
    if(root==NULL){
        return ;
    }


    if((root->left==NULL && root->right==NULL)){
         temp.push_back(root->val);
          sm+=root->val;
            if(sm==targetSum){
                
                    ans.push_back(temp);
             }
             return ;
    }
     temp.push_back(root->val);
    sm+=root->val;

    solve(root->left,targetSum,ans,temp,sm);
    solve(root->right,targetSum,ans,temp,sm);

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int>temp;
        int sm=0;
        solve(root,targetSum,ans,temp,sm);
        return ans;
    }
};




//when temp by refrence passes

void solve(TreeNode* root, int targetSum,vector<vector<int>> &ans,vector<int> &temp,int sm){
  
    if(root==NULL){
        return ;
    }


    if((root->left==NULL && root->right==NULL)){
         temp.push_back(root->val);
          sm+=root->val;
            if(sm==targetSum){
                
                    ans.push_back(temp);
             }
      temp.pop_back();
          sm-=root->val;
             return ;
    }
     temp.push_back(root->val);
    sm+=root->val;

    solve(root->left,targetSum,ans,temp,sm);
    solve(root->right,targetSum,ans,temp,sm);
  
  
  //wapas time 
    temp.pop_back();
     sm-=root->val;

}










