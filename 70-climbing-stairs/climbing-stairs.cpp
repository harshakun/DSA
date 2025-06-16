class Solution {
public:

    int check (int n ,vector<int> & dp)
    {
        if(n==0) return 1;
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];

        int x = check(n-1,dp)+check(n-2,dp);
        dp[n]=x;
        return x;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int c = check(n,dp);
        return c;

        
    }
};