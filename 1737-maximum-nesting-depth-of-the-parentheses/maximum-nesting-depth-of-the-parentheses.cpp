class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans =0, c=0;
        for(int i =0;i<s.size();i++)
        {
            if(s[i]=='(') {c++; 
            ans = max(ans,c);
            }
            else if(s[i]==')') c--;
        }
        return ans;
        
    }
};