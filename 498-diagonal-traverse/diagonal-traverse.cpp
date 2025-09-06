class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans ;
        int i =0,j=0, m = mat.size(), n = mat[0].size();
        bool up = true;
        while(ans.size()<m*n)
        {   
            ans.push_back(mat[i][j]);
                        if (up) {
                // moving up-right
                if (j == n - 1) {  // last column
                    i++;
                    up = false;
                } else if (i == 0) {  // first row
                    j++;
                    up = false;
                } else {
                    i--;
                    j++;
                }
            } else {
                // moving down-left
                if (i == m - 1) {  // last row
                    j++;
                    up = true;
                } else if (j == 0) {  // first column
                    i++;
                    up = true;
                } else {
                    i++;
                    j--;
                }
            }
        }

        return ans ;
    }
};
// while up i--;j++;
// when i<0 or j>n down i++; or down i+=2; j--;
// wjile down i++;j--;
//  when j<0 or i==m up j++; or up i--;j+=2;