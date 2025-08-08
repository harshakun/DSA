class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int n = s.size();
        string ans="";
        for(int i =0;i<n;i++)
        {
            if(s[i]=='(') 
            {if(st.empty()) st.push(s[i]);
            else {
                st.push(s[i]);
                ans = ans + s[i];
            }
            }
            else {
                st.pop();
                if(!st.empty()) ans = ans+s[i];
            }
        
        }
        return ans;
        
    }
};