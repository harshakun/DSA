class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        if(n<3) return 0;
        unordered_map<int,int> mp;
        int c =0;
        for(int i =0;i<3;i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]==2) c++;
        }
        int ans =0;
        if(c==0) ans++;
        for(int i =3;i<n;i++)
        {
            mp[s[i-3]]--;
            if(mp[s[i-3]]==1) c--;
            mp[s[i]]++;
            if(mp[s[i]]==2) c++;
            if(c==0) ans++;
        }
        
        return ans;
    }
};