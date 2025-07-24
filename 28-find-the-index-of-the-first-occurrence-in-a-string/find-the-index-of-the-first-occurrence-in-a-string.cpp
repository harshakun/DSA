class Solution {
public:
    int strStr(string s1, string s2) {
        int l = s1.size();
        int l2 = s2.size();
        int i =0;
        while(i<l-l2+1)
        {   int j =0;
            if(s1[i]==s2[j])
            {
                int s = i;
                while(j<l2)
                {
                    if(s1[s]!=s2[j]) break;
                    else if(j==l2-1) return i;
                    s++;j++;
                    
                }
            }i++;
        }
        return -1;
    }
};