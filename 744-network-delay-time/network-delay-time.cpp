class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>>adj(n+1);
        for(int i =0;i<times.size();i++)
        {
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
      priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>>> q;

        q.push({0,k});
        vector<int> ans(n+1,INT_MAX);
        ans[k] = 0;
        while(!q.empty())
        {
            int d =q.top().first;
            int i = q.top().second;
            q.pop();
            
            for (auto u : adj[i]) {
                int next = u.first;
                int weight = u.second;

                if (d + weight < ans[next]) {
                    ans[next] = d + weight;
                    q.push({ans[next], next});
                }
            }

        }
         int m = 0;
        for (int i = 1; i <= n; i++) {
            if (ans[i] == INT_MAX) return -1;
            m = max(m, ans[i]);
        }

return m;
    }
};