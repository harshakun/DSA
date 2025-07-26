class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> heap;
        for(int i =0;i<nums.size();i++)
        {
            heap.push(nums[i]);
        }int x;
        for(int i=1;i<=k;i++)
        {
             x = heap.top();
            heap.pop();
        }
        return x;
    }
};