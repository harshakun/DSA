class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set <int> s;
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum = nums[i]+nums[i+1];
            if(s.find(sum)==s.end()) s.insert(sum);
            else return true;
        } 
        return false;
        
    }
};