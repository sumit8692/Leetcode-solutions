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
    bool Recur(TreeNode* root, int rootdata){
        if(root == nullptr) return true;
        
        if(root->val != rootdata)   return false;
        
        return Recur(root->left, rootdata) && Recur(root->right, rootdata);
        
    }
    
    bool isUnivalTree(TreeNode* root) {
        return Recur(root, root->val);
    }
};