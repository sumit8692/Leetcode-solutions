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
    TreeNode *outlier1, *outlier2;
    int fprev, rprev;
    void forwardInorder(TreeNode *root) {
        if(!root) return;
        forwardInorder(root->left);
        //process this node
        if(root->val < fprev) {
            //outlier
            outlier1 = root;
        }
        fprev = root->val;
        forwardInorder(root->right);
    }
    void reverseInorder(TreeNode *root) {
        if(!root) return;
        reverseInorder(root->right);
        //process this node
        if(root->val >= rprev) {
            //outlier
            outlier2 = root;
        }
        rprev = root->val;
        reverseInorder(root->left);
    }
public:
    void recoverTree(TreeNode* root) {
        fprev = INT_MIN;
        rprev = INT_MAX;
        forwardInorder(root);
        reverseInorder(root);
        if(outlier1 && outlier2) swap(outlier1->val, outlier2->val);
    }
};