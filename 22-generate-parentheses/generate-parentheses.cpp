class Solution {
public:
    void gp(vector<string> &ans,int i,int j,int n ,string s)
    {
        if(s.size()==2*n) {ans.push_back(s);
        return;}
        if(i<n) {
            gp(ans,i+1,j,n,s+'(');}
        if(j<i)
        {
            gp(ans,i,j+1,n,s+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        gp(ans,0,0,n,"");
        return ans;

        
    }
};