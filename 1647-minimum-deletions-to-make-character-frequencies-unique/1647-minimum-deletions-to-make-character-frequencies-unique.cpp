class Solution {
public:
    int minDeletions(string s) {
        
        vector<int> vec(26,0);
        int temp = 0, ans = 0;
        priority_queue<int> pq;
        for(auto x: s) vec[x-'a']++;
        
        for(int i: vec) if(i != 0)  pq.push(i);
        while(!pq.empty() && pq.top() > 0){
            temp = pq.top();
            pq.pop();
            if(!pq.empty() && pq.top() == temp){
                temp--;
                pq.push(temp);
                ans++;
            }
        }
        return ans;
        
    }
};