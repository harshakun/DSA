class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i =0;i<32;i++)
        {
            int c=0;
            for(auto num :nums)
            {
                c+= (num>>i) &1;
            }
            c=c%3;
            res |= (c<<i);

        }
        return res;
        
    }
};