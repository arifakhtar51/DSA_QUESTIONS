
class Solution
{
public:
    void solve(Node * root,int sm,int &mx,int ln1,int &ln2){
        
        if(root==NULL){
            if(ln1>ln2){
                ln2=ln1;
                mx=sm;
            }
            else if(ln1==ln2){
                mx=max(mx,sm);
            }
            return ;
        }
       
        sm+=root->data;
       
        solve(root->left,sm,mx,ln1+1,ln2);
  
        solve(root->right,sm,mx,ln1+1,ln2);
        
        
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int mxSum=INT_MIN;
        int sum=0;
        int ln=0,mxln=0;
        solve(root,sum,mxSum,ln,mxln);
        return mxSum;
    }
};
