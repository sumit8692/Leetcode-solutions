class Solution {
public:
    vector<int> nextgreat(vector<int> &nums){
        int n =nums.size();
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() < nums[i])   st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(nums[i]);
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
        vector<int> v1 = nextgreat(nums2);
        unordered_map<int,int> mp;
        for(int i = 0; i < nums2.size(); i++)
            mp[nums2[i]] = v1[i];
        vector<int> ans(nums1.size());
        for(int i = 0; i < nums1.size(); i++)
            ans[i] = mp[nums1[i]];
        return ans;     
    }
};