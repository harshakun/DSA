class Solution {
public:
    int solve(vector<vector<int>>& grid,int i , int j , int m , int n ,vector<vector<int>>& dp)
    {   
        if(i==m-1 && j==n-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int r[]= {1,0};
        int c[] = {0,1};
        int down = INT_MAX;
        for(int k =0;k<2;k++)
        {
            if(i+r[k]<m && j+c[k]<n) {int up =grid[i][j] +(solve(grid,i+r[k],j+c[k],m,n,dp));
            down = min(down , up);
            }
        }
        return dp[i][j]=down;
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp (grid.size()+1,vector<int>(grid[0].size()+1,-1));
        
        return solve(grid,0,0,grid.size(),grid[0].size(),dp);
        
    }
};