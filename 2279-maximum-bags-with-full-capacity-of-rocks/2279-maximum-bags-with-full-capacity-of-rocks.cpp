class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        for(int i = 0; i < capacity.size(); i++)    capacity[i] -= rocks[i];// to check which bags are already filled if it's 0 meaning bags filled otherwise we will have to fill it with additional rocks
        
        int cnt = 0;
        sort(capacity.begin(), capacity.end());//
            
        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] == 0)  cnt++;
            else if(capacity[i] <= additionalRocks) cnt++, additionalRocks -= capacity[i];
            else break;
        }
        
        return cnt;
    }
};