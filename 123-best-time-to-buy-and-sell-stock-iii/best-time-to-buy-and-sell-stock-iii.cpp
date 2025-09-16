class Solution {
public:
  int solve(vector<int>& prices, int i,int t, bool can,vector<vector<vector<int>>> &dp)
    {
        if(i==prices.size()) return 0;
        if(dp[i][can][t]!=-1) return dp[i][can][t];
        if(can)
        {   if(t==2) return 0;
            int buy = -prices[i] + solve(prices, i+1,t+1, false,dp);
            int nbuy = solve(prices, i+1, t,true,dp);
            return dp[i][can][t]=max(buy , nbuy);
        }
        else 
        {
            int sell = prices[i]+solve(prices,i+1,t,true,dp);
            int hold = solve(prices,i+1,t,false,dp);
            return dp[i][can][t]=max(sell, hold);
        }
        
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size()+1,vector<vector<int>>(2,vector<int>(3,-1)));
     return solve(prices,0,0,true,dp);   
    }
};