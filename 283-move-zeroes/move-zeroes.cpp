class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                int j =i;
                while(j<nums.size()&&nums[j]==0)
                {
                    j++;
                }
               if(i!=j && j<nums.size())
               { swap(nums[i],nums[j]);}
                if(j==nums.size()-1) break;
            }
        }
        
    }
};