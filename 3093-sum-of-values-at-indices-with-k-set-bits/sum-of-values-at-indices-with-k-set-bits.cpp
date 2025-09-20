class Solution {
public:
    int findbit(int n)
    {int c=0;
        while(n!=0)
        {
            if((n&1)==1) c++;
            n=n>>1;
        }
        return c;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            if(findbit(i)==k) sum = sum + nums[i];
        }
        return sum;
    }
};