
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;
         if(root==0)return ans;
         queue<TreeNode*>q;
         q.push(root);
         bool flag=1;
         while(!q.empty()){
             int width=q.size();
             vector<int>temp(width);
             for(int i=0;i<width;i++){
                 TreeNode* data=q.front();q.pop();
                 int inx=flag?i:width-i-1;
                 temp[inx]=data->val;
                 if(data->left){
                     q.push(data->left);
                 }
                 if(data->right){
                     q.push(data->right);
                 }
                 
             }
             ans.push_back(temp);
             flag=!flag;
         }
         return ans;
    }
};
