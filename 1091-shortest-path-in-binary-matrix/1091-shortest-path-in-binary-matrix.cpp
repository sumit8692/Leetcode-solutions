#define pii pair<int,int>
#define F first
#define S second
class Solution {
public:
    int x[8] = {0, 0, 1, -1, 1, -1, 1, -1};
    int y[8] = {1, -1, 0, 0, 1, -1, -1, 1};
    
    bool isValid(int i, int j, int n)
    {
        return (i >= 0 && j >= 0 && i < n && j < n);
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& a) {
        int n = a.size();
        
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        
        priority_queue<pair<int,pii>, vector<pair<int,pii>>, greater<pair<int,pii>>> q;
        if(a[0][0] == 1) return -1;
        else if(n == 1 && a[0][0] == 0) return 1;
        
        q.push({1, {0, 0}});
        vis[0][0] = true;
        
        while(!q.empty())
        {
            int sz = q.size();
            for(int i=0; i<sz; i++)
            {
                pair<int,pii> front = q.top();
                q.pop();
                
                int xx = front.S.F, yy = front.S.S, cost = front.F;
                vis[xx][yy] = true;
                
                for(int j=0; j<8; j++)
                {
                    int cx = xx + x[j];
                    int cy = yy + y[j];
                    
                    if(isValid(cx, cy, n) && a[cx][cy] == 0 && !vis[cx][cy])
                    {
                        vis[cx][cy] = true;
                        
                        if(cx == n-1 && cy == n-1)
                        return cost+1;
                        q.push({cost + 1, {cx, cy}});
                    }
                }
            }
        }
        
        return -1;
    }
};