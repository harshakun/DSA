class Solution {
public:
    vector<string> ans;
    void solve(string &s, int i , int &n ,string temp ,set<string> &st)
    {
        if(i==n) 
        {
            ans.push_back(temp);
            return;
        }
        for(int j=1;j+i<=n;j++)
        {
            string t = s.substr(i,j);
            if(st.find(t)!=st.end())
            {
                string newTemp = (temp.empty() ? t : temp + " " + t);
                solve(s, i + j, n, newTemp, st);

            }
        }
    
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        int n =s.size();
    set<string> st;
    vector<int> dp(n+1,-1);
    for(auto i : wordDict)
    {
        st.insert(i);
    }
    solve(s,0,n,"",st);
    return ans;
        
    }
};