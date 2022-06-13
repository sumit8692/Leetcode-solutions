class Solution {
public:
    bool areNumbersAscending(string s) {
        
        int curr = 0, prev = 0;
        
        for(auto a: s){
            if(isdigit(a))
                curr = curr*10 + (a-'0');
            else if(curr != 0){
                if(prev >= curr)    return false;
                prev = curr;
                curr = 0;
            }
        }
        return (curr==0) || curr > prev;
    }
};