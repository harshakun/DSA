class Solution {
public:

    void solve(vector<int>& nums,vector<int> vis,vector<int> res,vector<vector<int>> &ans,int in)
    {
        // if(res.size()==nums.size()) 
        // {ans.push_back(res);
        // return;
        // }
        if(in==nums.size()) 
        {
            ans.push_back(nums);
            return;
        }
        for(int i =in;i<nums.size();i++)
        {
            // if(vis[i]==0)
            // {
            //     res.push_back(nums[i]);
            //     vis[i]=1;
            //     solve(nums,vis,res,ans);
            //     vis[i]=0;
            //     res.pop_back();
            // }

            swap(nums[i],nums[in]);
            solve(nums,vis,res,ans,in+1);
            swap(nums[i],nums[in]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> vis(n,0);
        vector<int> res;
        vector<vector<int>> ans;
        solve(nums,vis,res,ans,0);
        return ans;
    }
};