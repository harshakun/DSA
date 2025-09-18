class Solution {
public:
int total=0,ans=0;
    int numSplits(string s) {
        int n = s.size();
        if(n==1) return 0;
        unordered_map<char,int> mp;
        for(int i =0;i<n;i++)
        {  if(mp.find(s[i])==mp.end()) total++; 
            mp[s[i]]++;
        }
        mp[s[0]]--;
        int a=0,b=total;
        if(mp[s[0]]==0) total--;
        a=1;
        set<int> st;
        st.insert(s[0]);
        if(a==total) ans++;
        for(int i =1;i<n-1;i++)
        {
            mp[s[i]]--;
            if(st.find(s[i])==st.end())
            {
                a++;
                st.insert(s[i]);
            }
            // mp[s[i]]--;
            if(mp[s[i]]==0) total--;
            if(a==total) ans++;
        }
        return ans;
    }
};