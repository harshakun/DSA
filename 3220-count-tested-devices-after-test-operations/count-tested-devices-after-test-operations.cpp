class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n = batteryPercentages.size();
        int c = 0;
        int sub =0;
        for(auto it : batteryPercentages)
        {
            if((it-sub)>0)
            {
                c++;
                sub++;
            }
        }
        return c;
    }
};