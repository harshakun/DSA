class Solution {
public:
int check(int n ,vector<int>& dp)
{
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int a = check(n-1,dp);
    int b = check(n-2,dp);
    dp[n]=a+b;
    return a+b;

} 
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int x = check( n , dp);
        return x;

        
    }
};