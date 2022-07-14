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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mp;
        for(int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;
        return splitTree(preorder, mp, 0, 0, inorder.size()-1);
    }
    
    TreeNode* splitTree(vector<int> &p, unordered_map<int, int> &m, int pix, int ileft, int iright){
        int rval = p[pix], imid = m[rval];
        TreeNode* root = new TreeNode(rval);
        if(imid > ileft)    root->left = splitTree(p,m,pix+1,ileft,imid-1);
        if(imid < iright)   root->right = splitTree(p,m,pix+imid-ileft+1,imid+1,iright);
        return root;
    }
};