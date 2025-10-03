class Solution {
public:
    bool checklower(string s, int n)
    {
        for(int i =0;i<n;i++)
        {
            if(islower(s[i])) return true;
        }
        return false;
    }
    
    bool checkupper(string s, int n)
    {
        for(int i =0;i<n;i++)
        {
            if(isupper(s[i])) return true;
        }
        return false;
    }
     bool checkdigit(string s, int n)
    {
        for(int i =0;i<n;i++)
        {
            if(isdigit(s[i])) return true;
        }
        return false;
    }
    bool checkchar(string s, int n)
    {
        for(int i =0;i<n;i++)
        {
            if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'||s[i]=='-'||s[i]=='+') return true;
        }
        return false;
    }

    bool check(string s , int n )
    {
        for(int i =1;i<n;i++)
        {
            if(s[i]==s[i-1]) return false;
        }
        return true;
    }
    bool strongPasswordCheckerII(string s) {
        if(s.size()<8) return false;
        int n =s.size();
        if(!checklower(s,n)) return false;
        if(!checkupper(s,n)) return false;
        if(!checkdigit(s,n)) return false; 
        if(!checkchar(s,n)) return false;
        if(!check(s,n)) return false; 
return true;
    }
};