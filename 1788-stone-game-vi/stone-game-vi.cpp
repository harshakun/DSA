class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        vector<pair<int,int>> c ;
        int n = aliceValues.size();
        for(int i =0;i<n;i++)
        {
            c.push_back({aliceValues[i]+bobValues[i],i});

        }
        sort(c.begin(),c.end(), greater<pair<int,int>>());
        int a = 0,b=0;
        for(int i =0;i<n;i++)
        {
            int in = c[i].second;
            if(i%2==0) a=a+aliceValues[in];
            else b = b+ bobValues[in];
        }
        if(a==b) return 0;
        else if(a>b) return 1;
        else return -1;
    }
};