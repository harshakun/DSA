class Solution {
public:

    int solve(vector<int>& nums, int target, int sum , int i ,vector<vector<int>>& dp)
    {
        if(i==nums.size() && sum == target) return 1;
        if(i==nums.size()) return 0;
        if(dp[sum+1000][i]!=-1) return dp[sum+1000][i];
        int a = solve(nums, target, sum-nums[i], i+1,dp);
        
        int b = solve(nums, target, sum+nums[i],i+1,dp);
        return dp[sum+1000][i] = a+b;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum =0;
        vector<vector<int>> dp (2001,vector<int>(21,-1));
        return solve(nums, target, 0,0,dp);


        
    }
};