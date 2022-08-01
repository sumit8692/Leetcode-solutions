class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        queue<int> q;
        for(int i = 1; i < 10; i++) q.push(i);
        
        vector<int> ans;
        
        while(!q.empty()){
                
            int num = q.front();
            q.pop();
            if(num >= low && num <= high)   ans.push_back(num);
            
            
            
            if(num % 10 < 9){
                int rem = num % 10;      
                q.push(num*10 + rem + 1);
            }   
        }
        return ans;
    }
};