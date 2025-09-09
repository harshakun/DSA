class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<int> p1;
        priority_queue<int,vector<int>,greater<int>> p2;
        for(auto i : nums1)
        {
            p1.push(i);
            p2.push(p1.top());
            p1.pop();
            if(p1.size()!=p2.size()) 
            {
                p1.push(p2.top());
                p2.pop();
            }
        }
         for(auto i : nums2)
        {
            p1.push(i);
            p2.push(p1.top());
            p1.pop();
            if(p1.size()!=p2.size()) 
            {
                p1.push(p2.top());
                p2.pop();
            }
        }
        if(p1.size()!=p2.size()) return p1.top();
        else return (p1.top()+p2.top())/2.0;
    }
};