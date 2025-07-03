class Solution {
public:
    int minDistance(string word1, string word2) {
        int l1= word1.size(),l2 = word2.size();
        vector<vector<int>> dp(l1+1,vector<int>(l2+1,0));

        for(int i =1;i<l1+1;i++)
        {
            for(int j =1;j<l2+1;j++)
            {
                if(word1[i-1]==word2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int lcs = dp[l1][l2],del =0,in=0;
        if(l1>lcs)
        {
            del = l1-lcs;
        }
        if(l2>lcs)
        {
            in = l2-lcs;
        }
        return del+in;

        
    }
};