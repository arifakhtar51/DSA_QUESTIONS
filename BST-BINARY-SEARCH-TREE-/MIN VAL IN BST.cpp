void solve(Node* root,int &ans){
    if(root==0)return ;
    ans=min(ans,root->data);
    solve(root->left,ans);
}
int minValue(Node* root) {
    // Code here
    if(root==0)return -1;
    int ans=INT_MAX;
    solve(root,ans);
    return ans;
}



//OPTIMIZE
int minValue(Node* root) {
    // Code here
    if(root==0)return -1;
    Node *temp=root;
    while(root){
        temp=root;
        root=root->left;
    }
    return temp->data;
}
