class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);  // default to -1
        stack<int> st;

        // Traverse the array twice (simulate circular array)
        for (int i = 2 * n - 1; i >= 0; i--) {
            int idx = i % n;
            while (!st.empty() && st.top() <= nums[idx]) {
                st.pop();
            }

            if (i < n) {  // only fill answer during first pass
                if (!st.empty()) {
                    ans[idx] = st.top();
                }
            }

            st.push(nums[idx]);
        }

        return ans;
    }
};

