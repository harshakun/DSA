class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        int s =0;
        for(auto i : nums)
        {
            s=s+i;
            if(s==0) c++;
        }
        return c;
        
    }
};