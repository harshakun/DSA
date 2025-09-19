class Solution {
public:
    vector<int> ans;
    
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        for(int i =0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
        }
        priority_queue<pair<int, int>,vector<pair<int,int>>, greater<pair<int,int>>> pq1;
        for(int i=0;i<k;i++)
        {
            auto it = pq.top();
            pq.pop();
            pq1.push({it.second,it.first});

        }
        while(!pq1.empty())
        {
            ans.push_back(pq1.top().second);
            pq1.pop();
        }
        return ans;
        
    }
};