class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        long long sum =0;
        long long ans =0;
        int c =0;

        for(int i =0;i<k;i++)
        {   sum = sum + nums[i];
            if(mp.find(nums[i])==mp.end())
            {
                c++;
                
            }
            mp[nums[i]]++;
            

        }
        if(c==k) ans =sum;
        for(int i =k;i<nums.size();i++)
        {
            sum = sum - nums[i-k];
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]==0)
            {c--;
            mp.erase(nums[i - k]);
            }
            sum = sum +nums[i];
            if(mp[nums[i]]==0) c++;
            mp[nums[i]]++;
            
            if(c==k) ans = max(ans,sum);
        }
        return ans ;
    }
};