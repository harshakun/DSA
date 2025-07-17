class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i =0;i<nums.size();i++)st.insert(nums[i]);
        int ans =0;
        for(int i =0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end())
            { int cur = nums[i];
                while(true)
                {  if(st.find(cur)!=st.end()) 
                {
                st.erase(cur);
                cur++;
                }
                    else break;
                    
                }
                ans = max(ans,cur-nums[i]);
            }

        }
    return ans ;
    }

};