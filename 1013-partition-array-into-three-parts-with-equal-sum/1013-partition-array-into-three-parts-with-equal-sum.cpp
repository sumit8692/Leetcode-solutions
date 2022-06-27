class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        
        int sum = 0;
        for(auto a: arr)    sum += a;
        
        if(sum % 3 != 0)    return false;
        
        int each = sum/3;
        int temp = 0;
        int found = 0;
        
        for(auto a: arr){
            temp+=a;
            if(temp == each)    found++, temp = 0;
        }
        
        return found >= 3?true : false;

    }
};