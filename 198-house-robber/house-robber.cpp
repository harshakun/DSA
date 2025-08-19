class Solution {
public:
    int solve(vector<int>& nums, int i,vector<int> &dp)
    {
        if(i==nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int a = nums[i];
        if(i+2<nums.size()){
         a +=solve(nums, i+2, dp);}
        int b = solve(nums,i+1,dp);
        return dp[i]=max(a,b);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return solve(nums,0,dp);
    }
};