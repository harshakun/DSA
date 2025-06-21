class Solution {
public:

    int check(vector<int>& nums,int i,vector<int>& dp)
    {
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int a =nums[i]+check(nums,i+2,dp);
        int b =check(nums,i+1,dp);
        dp[i]=max(a,b);
        return max(a,b);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return check(nums,0,dp);
        
    }
};