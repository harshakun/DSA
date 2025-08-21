class Solution {
public:
    
    int solve(string &s, string &t, int n , int m ,vector<vector<int>>& dp)
    {
        if( m== t.size()) {
             return 1 ;}
        if(n == s.size()) return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        int res =0;
        if(s[n]==t[m]) {
            res+=solve(s,t,n+1,m+1,dp);
            
        }
        res+=solve(s,t,n+1,m,dp);
        return dp[n][m] = res;
    }
    int numDistinct(string s, string t) {
        vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,-1));
        if(s.size()<t.size()) return 0;
        return solve(s,t,0,0,dp);
    }
};