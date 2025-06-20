class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<vector<int>> &ans,vector<int> res,int sum,int i)
    {    
        if(i==candidates.size()){
            return;
        }
        if(sum==target) {
            ans.push_back(res);
        return ;
        }
        if(sum<=target)
        {
        
          res.push_back(candidates[i]);
        solve(candidates, target, ans, res, sum + candidates[i], i);
        res.pop_back();  // Backtrack
           
            

        }
        solve(candidates, target, ans, res, sum, i + 1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        // int sum =0;
                 solve(candidates,target,ans,res,0,0);
                 return ans;
        
    }
};