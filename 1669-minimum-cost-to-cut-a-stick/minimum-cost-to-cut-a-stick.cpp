class Solution {
public:
    int dfs(int i, int j, vector<int>& cuts, vector<vector<int>>& dp) {
        if (i > j) return 0; // No cuts to make

        if (dp[i][j] != -1) return dp[i][j];

        int mini = INT_MAX;

        for (int k = i; k <= j; ++k) {
            int cost = cuts[j + 1] - cuts[i - 1]; // Length of stick being cut
            cost += dfs(i, k - 1, cuts, dp);      // Cost of left part
            cost += dfs(k + 1, j, cuts, dp);      // Cost of right part
            mini = min(mini, cost);
        }

        return dp[i][j] = mini;
    }

    int minCost(int n, vector<int>& cuts) {
        // Add 0 and n to the cuts and sort them
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());

        int c = cuts.size();
        vector<vector<int>> dp(c, vector<int>(c, -1));

        // We calculate between (1, c-2) because 0 and n are the boundaries
        return dfs(1, c - 2, cuts, dp);
    }
};
