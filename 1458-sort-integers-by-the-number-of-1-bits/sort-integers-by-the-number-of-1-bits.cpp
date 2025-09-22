class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i : arr)
        {   int val =i;
            int c=0;
            while(val!=0)
            {
                if((val&1) == 1) c++;
                val=val>>1;
            }
            pq.push({c,i});
        }
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};