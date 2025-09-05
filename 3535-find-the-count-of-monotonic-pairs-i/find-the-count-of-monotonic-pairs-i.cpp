class Solution {
public:
    int solve(vector<int>& nums, int i , int p1, int p2,vector<vector<vector<int>>>& dp)
    {const int MOD = 1e9 + 7;
        if(i==nums.size()) return 1;
        if(dp[i][p1][p2]!=-1) return dp[i][p1][p2]; 
    int ans=0;
        for(int j=p1;j<=nums[i];j++)
        {
            int j2 = nums[i]-j;
            if(j2<=p2)   ans = (ans + solve(nums, i + 1, j, j2, dp)) % MOD;

        }
        return dp[i][p1][p2]=ans %MOD;
    }
    int countOfPairs(vector<int>& nums) {
        vector<vector<vector<int>>> dp(nums.size()+1,vector<vector<int>>(51 ,vector<int>(51,-1)));
        return solve(nums, 0,0,50,dp);
    }
};