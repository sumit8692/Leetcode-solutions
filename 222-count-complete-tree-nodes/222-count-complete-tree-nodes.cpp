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
    //This is wrong as we are visiting each node and counting it.
    int count = 0;
    int countNodes(TreeNode* root) {
        
        if(root == NULL)    return 0;
        
        
        countNodes(root->left);
        countNodes(root->right);
        count++;
        return count;
        
    }
        
        
};