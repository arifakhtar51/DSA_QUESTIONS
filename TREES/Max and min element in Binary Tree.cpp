
class Solution
{
public:
int mx=INT_MIN;
int mn=INT_MAX;
    int findMax(Node *root)
    {
        //code here
        if(root==0)return 0;
        mx=max(root->data,mx);
        findMax(root->right);
        return mx;
    }
    int findMin(Node *root)
    {
        //code here
        if(root==0)return 0;
        mn=min(root->data,mn);
        findMin(root->left);
        return mn;
    }
};
