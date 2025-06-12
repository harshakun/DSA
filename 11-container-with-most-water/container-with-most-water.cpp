class Solution {
public:
    int maxArea(vector<int>& nums) {
        int m = 0;
        int i =0;
        int j = nums.size()-1;
        while(i<j)
        {
            int l = (j-i)*min(nums[i],nums[j]);
            m = max(m,l);
            if (nums[i]>nums[j])
            {
                j--;
            }else i++;
        }
        return m;
    }
};