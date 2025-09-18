class Solution {
public:

    bool solve(string &s , int i , int n , set<string>& st, vector<int> &dp)
    {
        if(i==n) return true;
        if(dp[i]!=-1) return dp[i];
        for(int j=1;j+i<=n;j++)
        {
            string temp = s.substr(i,j);
            if(st.find(temp)!=st.end() && solve(s,i+j,n,st,dp)) return dp[i]=true;
        }
        return dp[i]=false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        set<string> st;
        for(auto it : words)
        {
            st.insert(it);
        }vector<string> ans;
        for(auto it : words)
        {
            st.erase(it);
            vector<int> dp(it.size()+1,-1);
            if(solve(it,0,it.size(),st,dp)) ans.push_back(it);
            st.insert(it);
        }
        return ans;
    }
};