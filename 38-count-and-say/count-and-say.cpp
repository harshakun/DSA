class Solution {
public:

    string solve(int n , string s)
    {
        if(n==1) return s;
        int i =0;
        int l = s.size();
        string res="";
        while(i<l)
        {
            char ch = s[i];
            int c=0;
            while(i<l&& s[i]==ch)
            {
                i++;
                c++;
            }
            res+=to_string(c);
            res+=ch;
            
        }return solve(n-1,res);
    }
    string countAndSay(int n) {
        return solve(n,"1");
    }
};