class Solution {
public:
    int check(vector<int>& nums, int val)
    {
        int sum =0,c=0;
        for(auto  i : nums)
        {
            sum = sum +i;
            if(sum >val) {
                c++;
                sum =i;
            }

        }
        return c+1;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high =0;
        for(auto i : nums)
        {
            high = high + i;
        }
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(check(nums,mid)>k){
                
                low = mid +1;
                
            }
            else high = mid -1;
        }
        return low;
    }
};