class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum =0,c =0;
        for(auto i : nums)
        {
            sum = sum + i;
            if(mp.find(sum-k)!=mp.end()) c=c+mp[sum-k];
            mp[sum]++;
        } 
        return c;
    }
};


// 1 2 3 4         k = 5
// 1 3 6 10 
