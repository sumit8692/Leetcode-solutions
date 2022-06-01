class Solution {
public:
    int countTriplets(vector<int>& nums) {
        int mem[1<<16]={};
        int n(nums.size());
        
        for( int i=0;i<n;i++ ){
            for( int j=0;j<n;j++){
                mem[nums[i]&nums[j]]++;
            }
        }
        
        
        int ans(0);
        
        for( int k=0;k<n;k++ )
            for( int ij=0;ij<(1<<16);ij++)
                
                if( (nums[k]&ij)==0 )
                    ans+=mem[ij];
                
            
        
        
        return ans;

        
    }
};


// class Solution {
// public:
//     int countTriplets(vector<int>& a) {
//         int  n = a.size();
//         unordered_map<int,int> mp;
//         for(int  i= 0;i<n;i++)
//         {
//             for(int  j= 0;j<n;j++)
//             {
//                mp[(a[i] & a[j])]++;
//             }
//         }
//         int ans  = 0;
//         for(auto &op : mp)
//         {
//             for(int  i = 0;i<n;i++)
//             {
//                 if(op.first & a[i])
//                 {}
//                 else
//                 {ans+=op.second;}
//             }
//         }
//         return ans;
//     }
// };