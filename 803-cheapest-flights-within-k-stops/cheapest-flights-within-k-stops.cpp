class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        for (auto& f : flights)
            adj[f[0]].emplace_back(f[1], f[2]);

       
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
        pq.push({0, src, 0});

        // We use a vector of size n to track the minimum stops to a node
        vector<int> stops(n, INT_MAX);

        while (!pq.empty()) {
            auto [cost, node, step] = pq.top();
            pq.pop();

            if (node == dst) return cost;

            // If we already reached this node in fewer stops, skip
            if (step > k || step > stops[node]) continue;

            stops[node] = step;

            for (auto& [nei, price] : adj[node]) {
                pq.push({cost + price, nei, step + 1});
            }
        }

        return -1;
    }
};
