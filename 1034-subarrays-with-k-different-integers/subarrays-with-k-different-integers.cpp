class Solution {
public:

    int solve(vector<int>& nums, int k){
    map<int,int> mp;
        int n = nums.size();
        int c =0;
        int ans =0;
        int i =0;
        for(int j =0;j<n;j++)
        {   
            if(mp[nums[j]]==0)
            {
                c++;
            }
            mp[nums[j]]++;

            while(c>k)
            {
                mp[nums[i]]--;
                if(mp[nums[i]]==0) c--;
                i++;
            }
            ans=ans+j-i+1;

        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return solve(nums,k)-solve(nums,k-1);
    }
};