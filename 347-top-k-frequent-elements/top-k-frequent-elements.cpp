class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it : nums)
        { 
            mp[it]++;
        }
        priority_queue<pair<int,int>> q;
        for(auto it : mp)
        {
            q.push({it.second,it.first});
        }
        vector<int> arr;
        while(k--)
        {
            auto it  = q.top();
            q.pop();
            arr.push_back(it.second);
            
        }
        return arr;

    }
};