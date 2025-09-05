class Solution {
public:
    int solve(int k, vector<int>& prices, bool buy, int i,vector<vector<int>>  &b, vector<vector<int>> &nb)
    {
        if(i == prices.size()) return 0;
        if(buy)
        {   if(b[i][k]!=-1) return b[i][k];
            int a = solve(k,prices,true,i+1,b,nb);
            int x = INT_MIN;
            if(k>0) x = -prices[i] + solve(k, prices, false , i+1,b,nb);
            return  b[i][k] = max(a,x);
        }
        else
        {   if(nb[i][k]!=-1) return nb[i][k];
            int a = solve(k,prices,false,i+1,b,nb);
            int x = prices[i] + solve(k-1,prices, true, i+1,b,nb);
            return nb[i][k] = max(a,x);
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<int>> b(prices.size()+1,vector<int>(k+1,-1));
        vector<vector<int>> nb(prices.size()+1,vector<int>(k+1,-1));
        return solve(k , prices, true, 0,b,nb);
    }
};

// if i bought i can sell or do nothing
// if i diont hold stocks the i can buy or do nithing 