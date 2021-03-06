class Solution {
public:

bool calcDist(vector<int>& position, int m,int dist)
{
    int n = position.size() ;
    int c = 1 ;
    int cordinate = position[0] ;
    for(int i=1;i<n;i++)
    {
        if(position[i] - cordinate >= dist )
        {
            c++ ;
            cordinate = position[i] ; 
        }
        if(c == m) return true ;
    }
    
    return false ;
}



int maxDistance(vector<int>& position, int m) {
    
        sort(position.begin(),position.end()) ;
        int n = position.size() ;
        int lo=0 ;
        int hi = position[n-1] - position[0]  ;
        int ans ;
        while(hi >= lo)
        {
            int mid = lo + (hi-lo)/2 ;
            if(calcDist(position,m,mid)) 
            {
                ans = mid ;
                lo = mid+1 ;
            }

            else hi = mid-1 ;
        }

        return ans ;
    
    }
};