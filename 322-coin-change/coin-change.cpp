class Solution {
public:

    int solve(vector<int>& coins, int a,int i,vector<vector<int>> &dp)
    {if(a==0) return 0;
    if(i==coins.size()) 
    {
     return INT_MAX-1;
    }
    if(dp[a][i]!=-1) return dp[a][i];
    int np = solve(coins,a,i+1,dp);
    if(coins[i]<=a)
    { 
        int p =1+solve(coins,a-coins[i],i,dp);
        if(p!=INT_MAX-1) return dp[a][i]=min(p,np);
       

    }
    return dp[a][i]=np;
    }


    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(amount+1,vector<int>(coins.size()+1,-1));
        int x= solve(coins,amount,0,dp);
   
        return (x==INT_MAX-1)?-1:x;
        
    }
};