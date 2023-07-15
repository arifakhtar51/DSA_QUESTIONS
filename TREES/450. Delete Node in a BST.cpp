
class Solution {
    TreeNode* find_root(TreeNode* root, int key){
        //base case
        if(!root)return 0;
        if(root->val==key)return root;
        if(root->val>key)return find_root(root->left,key);
        else return find_root(root->right,key);
        return root;
    }
public:
int  MaxVal(TreeNode* root){
    //base case
    TreeNode* temp = root;
	if(temp == NULL) {
		return -1;
	}

	while(temp -> right != NULL) {
		temp = temp ->right;
	}

	return temp->val ;
}
// }
//  TreeNode* Solve(TreeNode* root, int key){
//      //base case
//      if(!root)return NULL;
//      //4 case
//      //A->root ka l and r null
//      if(!root->left && !root->right){
//          delete root;
//          return NULL;
//      }
//      if(!root->left && root->right){
//          TreeNode*temp=root->right;
//          delete root;
//          return temp;
//      }
//      if(root->left && !root->right){
//          TreeNode*temp=root->left;
//          delete root;
//          return temp;
//      }
//      //case D think both present
//      else{
//          TreeNode*a=find_Maxroot(root->left);//right me jate rho mil jaega
//          root->val=a->val;
//          delete a;


//      }
//      return root;
    


//  }
TreeNode* deleteNodeInBST(TreeNode* root, int target) {
	
	//base cae
	if(root == NULL ) {
		return NULL;
	}
//cout << "Request recieved for " >> root->data << " with target" << target << endl;
	if(root->val == target) {
		//isi ko delete krna h 
		//4 cases 
		if(root->left == NULL && root->right == NULL) {
			//leaf node
			//delete root;
			return NULL;
		}
		else if(root->left == NULL && root->right != NULL) {
			TreeNode* child = root->right;
			//delete root;
			return child;
		}
		else if(root->left != NULL && root->right == NULL) {
			TreeNode* child  = root->left;
			//delete root;
			return child;
		}
		else {
			//both child
			//find inorder predecessor inb left subtree
			int inorderPre = MaxVal(root->left);
			//replace root->data value with inorder predecessor
			root->val = inorderPre;
			//delete inorder predecessor from left subtree
			root->left = deleteNodeInBST(root->left,inorderPre);
			return root;
			
		}
		
	}
	else if(target > root -> val) {
		//right jana chahiye
		root->right =  deleteNodeInBST(root->right, target);
	}
	else if(target < root->val) {
		//left jana chahioye
		root->left = deleteNodeInBST(root->left, target);
	}
	return root;
}

    TreeNode* deleteNode(TreeNode* root, int key) {
        
        return deleteNodeInBST(root,key);
    }
};




