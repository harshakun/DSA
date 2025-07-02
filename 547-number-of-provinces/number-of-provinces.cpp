class Solution {
public:
    int find(vector<int>& s, vector<int>& p, int i) {
        if (p[i] == i) return i;
        return p[i] = find(s, p, p[i]); // Path compression
    }

    int findCircleNum(vector<vector<int>>& mat) {
        int n = mat.size();

        vector<int> s(n + 1, 1);     // size array (1-based)
        vector<int> p(n + 1, 0);     // parent array (1-based)

        for (int i = 1; i <= n; i++) {
            p[i] = i;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (mat[i - 1][j - 1] == 1) {
                    int u = find(s, p, i);
                    int v = find(s, p, j);
                    if (u != v) {
                        // Union by size
                        if (s[u] < s[v]) {
                            p[u] = v;
                            s[v] += s[u];
                        } else {
                            p[v] = u;
                            s[u] += s[v];
                        }
                    }
                }
            }
        }

        unordered_set<int> provinces;
        for (int i = 1; i <= n; i++) {
            provinces.insert(find(s, p, i));  // Use representative
        }

        return provinces.size();
    }
};
