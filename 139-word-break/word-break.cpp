class Solution {
public:
bool solve (string &s ,int i,int &n , set<string> &st,vector<int> &dp)
{
    if(i==n) return true;
    if(dp[i]!=-1) return dp[i];
    for(int j =1;j<=n;j++)
    {
        string temp = s.substr(i,j);
        if(st.find(temp)!=st.end() && solve(s,i+j,n,st,dp)) return dp[i]=true;

    }
    return dp[i] =false;


}
    bool wordBreak(string s, vector<string>& wordDict) {
     int n =s.size();
    set<string> st;
    vector<int> dp(n+1,-1);
    for(auto i : wordDict)
    {
        st.insert(i);
    }
    return solve(s,0,n,st,dp);
    }
};