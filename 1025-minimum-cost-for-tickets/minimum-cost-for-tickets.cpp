class Solution {
public:
    int solve(vector<int>& days, vector<int>& costs, int i , int n,vector<int>& dp)
    {
        if(i==n) return 0;
        int ans = INT_MAX;
        if(dp[i]!=-1) return dp[i];
        for(int j =0;j<3;j++)
        { int day;
            if(j==0) day =1;
            else if(j==1) day =7;
            else day = 30;
            int in = i+1;
            while(in<n && days[in]<days[i]+day) in++;
            int temp=costs[j]+solve(days,costs, in,n,dp);
            ans =min(ans,temp);
        }
        return dp[i]=ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+1,-1);
        return solve(days,costs,0,days.size(),dp);
        
    }
};