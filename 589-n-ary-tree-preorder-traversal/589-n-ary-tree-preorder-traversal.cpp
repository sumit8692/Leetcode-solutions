/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        
        vector<int> ans;
        
        //Check the root value
        if(!root)
            return ans;
        
        //call the travasal fuction
        traversal(root,ans);
        return ans;
    }
     //now implement the traversal function mechanism
        void traversal (Node* root, vector<int>&ans)
        {
            //push 1 value into the stack / vecotor
            ans.push_back(root->val);
            
            //Now loop for every children 
            for(int i=0; i< root->children.size(); i++)
            {
                //recursive fuction
                traversal(root->children[i], ans);
            }
        }
};