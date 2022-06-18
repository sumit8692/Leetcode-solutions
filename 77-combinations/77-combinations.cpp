class Solution {
public:
//     vector<vector<int>> combine(int n, int k) {
//         vector<vector<int>> ans;
//         vector<int> ansitem;
//         backtrack(n,k,ans,ansitem,1);
//         return ans;
//     }
    
//     void backtrack(int n, int k, vector<vector<int>> &ans, vector<int> &ansitem,int start){
        
//         if(k == 0){
//             ans.push_back(ansitem);
//             return;
//         }
        
//         for(int i = start; i <= n; i++){
//             ansitem.push_back(i);
//             backtrack(n,k-1,ans,ansitem,i+1);
//             ansitem.pop_back();
//         }
//     }
//  public:  
//     	vector<vector<int>> combine(int n, int k) {
// 		    vector<vector<int>> answer;
// 		    vector<int> answerItem;

// 		    backTracking(n, k, answer, answerItem, 1);

// 		    return answer;
// 	}

// private:
// 	void backTracking(int n, int k, vector<vector<int>>& answer, vector<int>& answerItem, int start) {
// 		if (k == 0) {
// 			answer.push_back(answerItem);
// 			return;
// 		}

// 		for (int i = start; i <= n; i++) {
// 			answerItem.push_back(i);
// 			backTracking(n, k - 1, answer, answerItem, i + 1);
// 			answerItem.pop_back();
// 		}
//     }
public:
    vector<vector<int>> res;
    vector<int> temp;
    void combinations(int n,int k,int st=1, int idx=0)
    {
        if(idx==k) {
            res.push_back(temp);
            return;
        }
        for(int i=st;i<=n;i++)
        {
            temp.push_back(i);
            combinations(n,k,i+1,idx+1);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        combinations(n,k);
        return res;
    }
    
};