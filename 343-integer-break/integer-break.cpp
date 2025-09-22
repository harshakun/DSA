class Solution {
public:
    int solve(int n,vector<int> &dp)
    {
        if(n==0|| n==1) return 1;
        int ans =0;
        if(dp[n]!=-1) return dp[n];
        for(int i =1;i<n;i++)
        {
            int p = i*solve(n-i,dp);
            int np = i*(n-i);
            ans = max({ans, p,np});
        }
        return dp[n]=ans;
    }
    int integerBreak(int n) {
        vector<int> dp(n+1,-1);
     return solve(n,dp);   
    }
};