class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map <int,int> mp;
        vector<int> res;
        for(int i =0;i<n;i++)
        {
            
            {
                if(mp.find(target-nums[i])!=mp.end())
                {
                    return{i,mp[target-nums[i]]} ;
                }
                else mp[nums[i]]=i;
            }
        }
        return res;
    }
};