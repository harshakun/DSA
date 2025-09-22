class Solution {
public:
    int solve(int n ,vector<int> &dp)
    {
        if(n==0) return 0;
        int ans =INT_MAX;
        if(dp[n]!=-1) return dp[n];
        for(int i =1;i<=n;i++)
        {
            int sq = i*i;

            if(sq<=n) 
            {   
                int p=1+solve(n-sq,dp);
                ans = min(ans,p);
            }
        
        }
        return dp[n]=ans;


    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};