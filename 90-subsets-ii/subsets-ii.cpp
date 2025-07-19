class Solution {
public:
   void  ss(vector<int> res,set<vector<int>> &st,vector<int>& nums, int i)
    { if(i==nums.size()) {
        sort(res.begin(),res.end());
        st.insert(res);
    return;
    }
        ss(res,st,nums,i+1);
        res.push_back(nums[i]);
        ss(res,st,nums,i+1);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

    vector<vector<int>> ans;
    set<vector<int>> st;
    vector<int> res;
    ss(res,st,nums,0);
    for(auto it : st)
    {
        ans.push_back(it);
    }
    return ans;


        
    }
};