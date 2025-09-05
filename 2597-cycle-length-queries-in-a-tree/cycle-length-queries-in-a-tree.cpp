#include <vector>
using namespace std;

class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& queries) {
        vector<int> result;

        for (auto &q : queries) {
            int a = q[0], b = q[1];
            int moves = 0;

            while (a != b) {
                if (a > b) {
                    a /= 2;
                } else {
                    b /= 2;
                }
                moves++;
            }

            result.push_back(moves + 1); 
        }

        return result;
    }
};
