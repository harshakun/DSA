class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.size();
        int i =0,c=0;
        while(i<n)
        {
            if(s[i]==' ') k--;
            if(k==0) return s.substr(0,i);
            i++;

        }
        if(k!=0) return s;
        return "";
    }
};