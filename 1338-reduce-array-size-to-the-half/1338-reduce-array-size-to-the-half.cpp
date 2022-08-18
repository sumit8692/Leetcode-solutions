class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int,int> count;
        priority_queue<int> q;
        
        for(auto c: arr)    count[c]++;
        
        for(auto c: count)      q.push(c.second);
        int cnt = 0;
        int removed = 0;
        while(removed < arr.size()/2){
            removed += q.top();
            q.pop();
            cnt++;
        }
        return cnt;
    }
};