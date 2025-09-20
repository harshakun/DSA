class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<int,int> mp;
        unordered_map<int,int> mp1;
        for(int i=0;i<t.size();i++)
        {
            mp[s[i]]=i;
            mp1[t[i]]=i;
        }
        int ans =0;

        for(int i=0;i<t.size();i++)
        {
            ans = ans + abs(mp[s[i]]-mp1[s[i]]);    
        }
        return ans;
    }
};