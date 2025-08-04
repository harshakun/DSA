class Solution {
public:

    bool solve(vector<int>& nums, int sum1, int sum2 , int i ,vector<vector<int>> &dp)
    {
        if(i == nums.size() )
        {
            if(sum1==sum2) return 1;
            else return 0;
        } 
     if(dp[sum1][i]!=-1) return dp[sum1][i];
        int  p1 = solve(nums, sum1+nums[i],sum2,i+1,dp);
        int p2 = solve(nums,sum1,nums[i]+sum2,i+1,dp);
        return dp[sum1][i]=p1+p2;
    }
    bool canPartition(vector<int>& nums) {
        vector<vector<int>> dp(20001,vector<int>(nums.size()+1,-1));
        return solve(nums,0,0,0,dp)==0?false:true;
    }
};