class Solution {
public:
    int solve(vector<int>& prices, int i, bool can,vector<vector<int>> &dp)
    {
        if(i==prices.size()) return 0;
        if(dp[i][can]!=-1) return dp[i][can];
        if(can)
        {
            int buy = -prices[i] + solve(prices, i+1, false,dp);
            int nbuy = solve(prices, i+1, true,dp);
            return dp[i][can]=max(buy , nbuy);
        }
        else 
        {
            int sell = prices[i]+solve(prices,i+1,true,dp);
            int hold = solve(prices,i+1,false,dp);
            return dp[i][can]=max(sell, hold);
        }
        
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1,vector<int>(2,-1));
     return solve(prices,0,true,dp);   
    }
};