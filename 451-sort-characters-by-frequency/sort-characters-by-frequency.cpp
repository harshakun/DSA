class Solution {
public:
    string frequencySort(string s) {
        unordered_map <int,int> mp;
        for(int i =0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it : mp)
        {
            pq.push({it.second,it.first});
        }
        string ans="";
        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            for(int i =1;i<=it.first;i++)
            {
                ans+=it.second;
            }
        }
        return ans;
    }
};