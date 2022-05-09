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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == NULL)    return false; // check if root is null then return false
        
        else if(root->left == NULL && root->right == NULL && targetSum-root->val==0) return 1; // if both left and right is null and our targetsum becomes 0 then keep returning true.
        
        else return hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val); // keep calling same function for both left and right node until null node is reached. We have used or because if any path return true then that's our answer... 
        
        
    }
};