class KthLargest {
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> pq; // Min-heap

    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int num : nums) {
            pq.push(num);
            if (pq.size() > k) {
                pq.pop();  // Keep only k largest
            }
        }
    }

    int add(int val) {
        pq.push(val);
        if (pq.size() > k) {
            pq.pop();  // Remove smallest among k+1
        }
        return pq.top();  // kth largest
    }
};
