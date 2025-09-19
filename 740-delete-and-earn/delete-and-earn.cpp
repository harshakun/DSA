class Solution {
public:
    int solve(vector<int> points, int n, int i ,vector<int> &dp)
    {
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int p = points[i] + solve(points, n, i+2,dp);
        int np = solve(points, n , i+1,dp);
    return dp[i]=max(p,np);

    }
    int deleteAndEarn(vector<int>& nums) {
        
        int maxNum = *max_element(nums.begin(), nums.end());
        vector<int> points(maxNum + 1, 0);

          for (int num : nums) {
            points[num] += num;
        }
        vector<int> dp(maxNum+1,-1);
        return solve(points , maxNum +1 ,0,dp);
    }
};