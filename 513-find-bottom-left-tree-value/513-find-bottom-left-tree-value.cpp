/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void findBottomLeftValue(TreeNode* root, int depth, int &maxdepth, int& leftval){
        if(root == NULL)    return;
        
        findBottomLeftValue(root->left, depth+1,maxdepth,leftval);
        findBottomLeftValue(root->right, depth+1,maxdepth,leftval);
        
        if(depth > maxdepth){
            maxdepth = depth;
            leftval = root->val;
        }
    }
    int findBottomLeftValue(TreeNode* root) {
     if(!root)  return 0;
       
     int maxdepth = 0;
     int leftval = root->val;
     findBottomLeftValue(root,0,maxdepth,leftval);
     return leftval;
    }
};