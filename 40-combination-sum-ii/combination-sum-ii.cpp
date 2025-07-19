class Solution {
public:

    void ss(vector<int>& nums, int target,vector<int> res,vector<vector<int>> &ans,int i)
{
    
    if(target == 0) 
    {
        ans.push_back(res); return ;
    }
    for(int j =i;j<nums.size();j++)
    {
        if(i<j && nums[j]==nums[j-1]) continue;
        if(nums[j]>target) break;
        res.push_back(nums[j]);
        ss(nums,target-nums[j],res,ans,j+1);
        res.pop_back();
    }

}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> res;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        ss(candidates,target,res,ans,0);
        return ans;
    }
};