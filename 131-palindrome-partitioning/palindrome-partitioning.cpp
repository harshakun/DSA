class Solution {
public:
    bool ispal(string s, int i ,int j )
    {
        
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    void solve(string s,vector<vector<string>> &ans,vector<string> res,int start )
    {   if(start == s.size())
    {
        ans.push_back(res);return;

    }
    for(int i =start ;i<s.size();i++)
    {
        if(ispal(s,start,i))
        {
            res.push_back(s.substr(start,(i-start+1)));
            solve(s,ans, res,i+1);
            res.pop_back();
        }
    }

    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> res;
    solve(s,ans,res, 0);
    return ans;

        
    }
};