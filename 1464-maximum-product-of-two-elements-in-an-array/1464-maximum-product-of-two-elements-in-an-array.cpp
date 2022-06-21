class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // we can solve this using priority_queue
        
        priority_queue<int> pq;
        for(auto a: nums)   pq.push(a);
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        
        return (a-1)*(b-1);
         
    }
};