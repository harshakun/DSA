class Solution {
public:
    int solve(vector<int>& nums, int i, int prevIdx, vector<vector<int>>& dp) {
        if (i == nums.size()) return 0;
        if (dp[i][prevIdx + 1] != -1) return dp[i][prevIdx + 1];

        // Not pick
        int np = solve(nums, i + 1, prevIdx, dp);

        // Pick
        int p = 0;
        if (prevIdx == -1 || nums[i] > nums[prevIdx]) {
            p = 1 + solve(nums, i + 1, i, dp);
        }

        return dp[i][prevIdx + 1] = max(p, np);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1)); // prevIdx ranges from -1 to n-1
        return solve(nums, 0, -1, dp);
    }
};
