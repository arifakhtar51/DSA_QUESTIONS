
void solve(Node *root,int d,map<int,vector<int>>&mp){
    //base cas
    if(root==0)return ;
    //cout<<"val of d->"<<d<<" rootData= "<<root->data<<endl;
    mp[d].push_back(root->data);
    d++;
    
    solve(root->left,d,mp);
    
    solve(root->right,--d,mp);
    
}

vector<int> diagonal(Node *root)
{
   // your code here
   map<int,vector<int>>mp;
   int d=0;
   solve(root,d,mp);
   vector<int> ans;
   
   for(auto i:mp){
       for(int j=0;j<i.second.size();j++){
           ans.push_back(i.second[j]);
       }
       
     
   }
   
   return ans;
}

//with the helpof queue also in my notebook
