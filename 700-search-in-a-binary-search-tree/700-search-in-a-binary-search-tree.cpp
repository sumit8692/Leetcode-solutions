class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
         
		 // if the node is empty or when you reach the leaf node
            if(root == NULL)
             return NULL;
            
			//if you find the value in the tree
            if(root->val == val)
             return root;
					
			//using Binary Search Approach in the tree		
           else if (root->val > val)
		   {
           return searchBST(root->left,val);
		   }
           
		   //if the node which contains the value is not found at the right search the left
            return searchBST(root->right,val);
    }
};