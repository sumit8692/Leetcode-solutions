class Solution {
    bool isValid(TreeNode *root,long long mini,long long maxi){
        
        if(!root)return true;
        
        if(root->val>mini and root->val<maxi){
        bool left=isValid(root->left,mini,root->val);
        bool right=isValid(root->right,root->val,maxi);    
            return left and right;
        }
        else    return false;
    }
public:
    bool isValidBST(TreeNode* root) {
        long long mini=LONG_MIN,maxi=LONG_MAX;
        return isValid(root,mini,maxi);
    }
};