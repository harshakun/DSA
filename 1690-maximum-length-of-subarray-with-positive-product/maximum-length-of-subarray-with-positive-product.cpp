class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int a=0, b=0;
        for(int i =0;i<n;i++)
        {
            if(nums[i]>0) {
                a++;
                b = (b>0)?b+1:0;
            }
            else if(nums[i]<0)
            {
                int temp = a;
                a=(b>0)?b+1:0;
                b=temp+1;
            }else{
                a=0;b=0;
            }
            ans = max(ans, a);

        }
        return ans;
    }
};