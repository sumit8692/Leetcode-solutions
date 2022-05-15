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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        
        if(!root)   return res;
        
        queue<TreeNode*> q;
        q.push(root);
        bool flag = true;
        
        while(!q.empty()){
            int size = q.size();
            vector<int> ans(size,0);
            for(int i = 0; i < size; i++){
                 TreeNode *temp = q.front();
                 q.pop();

                 if(flag)
                    ans[i] = temp->val;
                 else
                    ans[size-i-1] = temp->val;
                
                 if(temp->left)  q.push(temp->left);
                 if(temp->right) q.push(temp->right);
            }
                        
            res.push_back(ans);
            if(flag == true)    flag = false;
            else   flag = true;
            
        }
        return res;
    }
};