class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int sell =0,buy=0;
        while(sell<prices.size())
        {
            if(prices[sell]>=prices[buy])
            {
                ans = max(ans,prices[sell]-prices[buy]);
                sell++;
            }else 
            {
                buy = sell;
                sell++;
            }
        }
        return ans;
        
    }
};