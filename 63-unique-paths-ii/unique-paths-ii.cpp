class Solution {
public:

    int solve(vector<vector<int>>& grid, int m , int n,vector<vector<int>>& dp)
    {
        
        if(m<1 || n<1||grid[m-1][n-1]==1) return 0;
        if(m==1 && n==1) return 1;
    
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n]=solve(grid,m,n-1,dp) + solve(grid,m-1,n,dp);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
    return solve(grid,m,n,dp);



    }
};
