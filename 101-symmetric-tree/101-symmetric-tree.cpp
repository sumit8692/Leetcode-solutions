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
    bool symmetric(TreeNode* rt1, TreeNode* rt2){
       if(rt1 != NULL and rt2 != NULL){
           bool a = symmetric(rt1->left,rt2->right);
           bool b = symmetric(rt1->right,rt2->left);
           if(a&&b&&(rt1->val==rt2->val)) return true;
           else return false;
        }
        else if(rt1 == NULL && rt2 == NULL)  return true;
        else return false;
        
        
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)    return true;
        
        return symmetric(root->left,root->right);
    }
};