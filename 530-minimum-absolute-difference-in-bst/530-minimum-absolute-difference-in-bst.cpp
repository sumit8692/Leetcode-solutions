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
    int diff = INT_MAX;
    TreeNode* prev = NULL;
    void help(TreeNode* root){
        if(root->left)  help(root->left);
           
        if(prev)    diff = min(diff,abs(root->val - prev->val));
        prev = root;
        if(root->right) help(root->right);
                       
        }
    int getMinimumDifference(TreeNode* root) {
        help(root);
        return diff;
    }
};