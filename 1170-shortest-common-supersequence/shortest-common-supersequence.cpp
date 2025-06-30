class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        
    int m = str1.size();
    int n = str2.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1));
    for(int i =0;i<m+1;i++)
    {
        for(int j =0;j<n+1;j++)
        {
            if(i==0||j==0) dp[i][j]=0;
            else{
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
    }
    string s="";
    int i =m,j=n;
     while(i > 0 && j > 0) {
            if(str1[i-1] == str2[j-1]) {
                s += str1[i-1];
                i--; j--;
            }
            else if(dp[i-1][j] >= dp[i][j-1]) {
                s += str1[i-1];
                i--;
            }
            else {
                s += str2[j-1];
                --j;
            }
        }

        // Add remaining characters from str1
        while(i > 0) {
            s += str1[i-1];
            i--;
        }

        // Add remaining characters from str2
        while(j > 0) {
            s += str2[j-1];
            j--;
        } 
        reverse(s.begin(), s.end()); 
  
return s;

    }
};