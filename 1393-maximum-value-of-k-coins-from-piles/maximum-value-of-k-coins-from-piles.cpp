// class Solution {
// public:
//     int solve(vector<vector<int>>& piles, int k , int r, vector<int> siz,vector<int> d,vector<vector<int>> &dp)
//     {
//         if(r==0) return 0;
//         int ans = 0;
        
//         for(int i =0;i<piles.size();i++)
//         {int temp=0;
//             if(dp[r][i]!=-1) temp = dp[r][i];
//             else if(d[i]<siz[i])
//             {   
//                  temp = piles[i][d[i]];
//                 d[i]++;
//                 temp = temp + solve(piles , k, r-1,siz,d,dp);
//                 d[i]--;
//             }
//             ans = max(ans, temp);
//             dp[r][i]=ans;

//         }
//         return ans;
//     }
//     int maxValueOfCoins(vector<vector<int>>& piles, int k) {
//         vector<int> siz;
//         for(int i =0;i<piles.size();i++)
//         {
//             siz.push_back(piles[i].size());
//         }
//         vector<int> d(piles.size(),0);
//         vector<vector<int>> dp(k+1,vector<int>(piles.size()+1,-1));
//         return solve(piles, k , k ,siz, d,dp);
//     }
// };

class Solution {
public:
    int solve(int i, int k, int x, vector<vector<int>>& piles, vector<vector<vector<int>>>& dp) {
        // If no coins left or all piles exhausted
        if (k == 0 || i == piles.size()) return 0;

        // If already computed
        if (dp[i][k][x] != -1) return dp[i][k][x];

        int res = 0;

        // Case 1: Skip to next pile
        res = max(res, solve(i + 1, k, 0, piles, dp));

        // Case 2: Take coin from current pile (if possible)
        if (x < piles[i].size() && k > 0) {
            int coin = piles[i][x];
            res = max(res, coin + solve(i, k - 1, x + 1, piles, dp));
        }

        return dp[i][k][x] = res;
    }

    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size();
        int maxPileSize = 0;
        for (auto& pile : piles)
            maxPileSize = max(maxPileSize, (int)pile.size());

        // dp[i][k][x] where:
        // i = current pile index [0..n]
        // k = coins left [0..k]
        // x = coins taken from current pile [0..maxPileSize]
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(k + 1, vector<int>(maxPileSize + 1, -1)));

        return solve(0, k, 0, piles, dp);
    }
};
