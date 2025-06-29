class Solution {
public:

    int solve(vector<int>& coins,int a,int i,vector<vector<int>>& dp)
    {
        if(i==coins.size())
        {
            if(a==0) return 1;
            else return 0;
        }
        if(dp[i][a]!=-1) return dp[i][a];
        int p =0;
        if(coins[i]<=a)
        {
            p = solve(coins,a-coins[i],i,dp);
        }
        int np = solve(coins,a,i+1,dp);

        return dp[i][a]=p+np;

    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        return solve(coins,amount,0,dp);
    }
};