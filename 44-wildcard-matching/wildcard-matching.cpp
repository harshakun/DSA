class Solution {
public:

    bool solve(string &s , string &p , int i , int j, int &n , int &m ,vector<vector<int>> &dp)
    {
        if (i==n && j==m) return true;
        else if(i<n &&j==m ) return false;
        else if(i==n && j<m)
        {
            for(int k =j ;k<m;k++)
            {
                if(p[k]!='*') return false;
            }
            return true;
        } 
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==p[j]||p[j]=='?') return dp[i][j]=solve(s,p,i+1,j+1,n,m,dp);
        else if(p[j]=='*') 
        {
            return dp[i][j]=solve(s,p,i+1,j,n,m,dp) || solve(s,p,i,j+1,n,m,dp);
        }
        else return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
return solve(s,p,0,0,n,m,dp);

        
    }
};