class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        int n= s.size();
        int i=0,j=0;
        vector<int> fre(256,0);
        int ans =0;
        while(j<n)
        {   fre[s[j]]++;
            
                while(fre[s[j]]>1)
                {
                    fre[s[i]]--;
                    i++;
                }
                
            
            // fre[s[j]]++;
            ans = max(ans,j-i);

        j++;

        }     
        return ans+1;   
    }
};