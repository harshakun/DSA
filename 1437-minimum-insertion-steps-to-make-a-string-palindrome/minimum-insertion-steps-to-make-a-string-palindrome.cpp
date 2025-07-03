class Solution {
public:
    int minInsertions(string str2) {
        string str1 =str2;
        reverse(str2.begin(),str2.end());
        int l = str2.size();
         vector<vector<int>> dp(l+1,vector<int>(l+1,0));
    for(int i =1;i<l+1;i++)
    {
        for(int j =1;j<l+1;j++)
        {
           
                if(str1[i-1]==str2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else 
                {
                    dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
                }
            
        }
    }
        return l-dp[l][l];
    }
};