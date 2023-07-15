
map<int,int>mp;

int findPos(int in[],int n,int ele){
    for(int i=0;i<n;i++){
        if(in[i]==ele){
            return i;
        }
    }
    //yaha kabhi waise aaega nhi;
    return -1;
}
Node *solve(int in[], int post[], int n,int &postIndex,int i,int j){
    //basecase
    if(i>j || postIndex<0){
        return NULL;
    }
    int ele=post[postIndex--];
    Node* root=new Node(ele);
    
    // int pos=findPos(in,n,ele);
    int pos=mp[ele];
    
    //phle right ki call
    
    root->right=solve(in,post,n,postIndex,pos+1,j);
    
    
    root->left=solve(in,post,n,postIndex,i,pos-1);
    return root;
}




//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    for(int i=0;i<n;i++){
        mp[in[i]]=i;
    }
    int postIndex=n-1,i=0,j=n-1;
    Node * root=solve(in,post,n,postIndex,i,j);
    return root;
}
