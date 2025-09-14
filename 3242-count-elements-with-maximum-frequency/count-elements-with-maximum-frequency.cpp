class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> temp (100.+1,0);
        for(auto i : nums)
        {
            temp[i]++;
        }
        sort(temp.begin(), temp.end(),greater<int>());
        int ans = temp[0];
        for(int i =1;i<100;i++)
        {
            if(temp[i]==temp[i-1]) ans +=temp[i];
            else break;
        }
        return ans;
        
    }
};