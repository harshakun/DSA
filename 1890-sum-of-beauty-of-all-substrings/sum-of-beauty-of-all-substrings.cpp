class Solution {
public:
    int check(string s )
    {
        int maxFreq=0,minFreq=501;
        int freq[26] = {0};
        for (char c : s) {
        freq[c - 'a']++;
    }
        for(int i =0;i<26;i++)
        {
                       if (freq[i] > 0) { // ignore unused letters
                maxFreq = max(maxFreq, freq[i]);
                minFreq = min(minFreq, freq[i]);}

        }
      
                return maxFreq-minFreq;
            
    }
    int solve(string s , int i )
    {
        if(i == s.size()-1) return 0;
        int ans =0;
        for(int j =i;j<s.size();j++)
        {
            ans+=check(s.substr(i,s.size()-j));
        }
        int ans2= solve(s,i+1);
        return ans+ans2;
    }
    int beautySum(string s) {
        return solve(s,0);
    }
};