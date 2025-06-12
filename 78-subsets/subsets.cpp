class Solution {
public:
   void  ss(vector<int> res,vector<vector<int>> &ans,vector<int>& nums, int i)
    { if(i==nums.size()) {ans.push_back(res);
    return;
    }
        ss(res,ans,nums,i+1);
        res.push_back(nums[i]);
        ss(res,ans,nums,i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {

    vector<vector<int>> ans;
    vector<int> res;
    ss(res,ans,nums,0);
    return ans;


        
    }
};