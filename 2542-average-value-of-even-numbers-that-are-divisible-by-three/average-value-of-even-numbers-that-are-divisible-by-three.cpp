class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum =0;
        int c=0;
        for(auto i : nums)
        {
            if(i%2==0 && i%3==0)
            {
                sum +=i;
                c++;
            }
        }
        return sum==0?0:sum/c;
    }
};