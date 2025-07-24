class Solution {
public:

    string solve(string s1,string s2, int i )
    {
        if(s1==""||s2=="") return "";
    int n = min(s1.size(),s2.size());
        while(i<n)
        {
            if(s1[i]==s2[i]) i++;
            else break;
        }
        return s1.substr(0,i);
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        int n = strs.size();
        for(int i =1;i<n;i++)
        {
            ans=solve(strs[i],ans,0);
        }
        return ans;
        
    }
};