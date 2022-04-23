class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int> s;
        for(int i = n; i >= 1; i--) s.push(i);
        
        for(int i = 0; i < target.size(); ){
               if(target[i] == s.top()){
                   ans.push_back("Push");
                   s.pop();
                   i++;
               }
               else{
                   ans.push_back("Push");
                   ans.push_back("Pop");
                   s.pop();
               }
        }
        return ans;
    }
};