class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h){
        int l = 1; 
        int hi = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while(l<=hi){
            int mid = (hi+l)/2;
            int time = calctime(piles,mid);
            
            if(time<=h){
                hi = mid-1;
                ans = mid;
            }
            
            else l = mid+1;
        
        }
        
        return ans;
        
    }
    
    int calctime(vector<int> &piles,int mid){
        int sum = 0;
        
        for(int i = 0; i < piles.size(); i++)    sum = sum + (piles[i]/mid) + ((piles[i]%mid)!=0);
        
        return sum;

    }
};