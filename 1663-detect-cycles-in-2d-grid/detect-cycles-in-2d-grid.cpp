class Solution {
public:

    bool check(vector<vector<char>>& grid,vector<vector<bool>> &vis,int i , int j,int pi, int pj,int m,int n )
    {
        vis[i][j]=true;

        int r[]={-1,0,1,0};
        int d[]={0,1,0,-1};
        for(int c=0;c<4;c++)
        {
            int ix = i+r[c];
            int jx= j+d[c];
            if(ix>=0 && ix<m &&jx>=0 && jx<n && grid[i][j]==grid[ix][jx])
            {
                if(!vis[ix][jx])
                {
                    if(check(grid,vis,ix,jx,i,j,m,n)) return true;
                }
                else if(ix!=pi &&jx != pj) return true;
            }
        }
        return false;


    }


    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i =0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(vis[i][j]==false) {
                    if(check(grid,vis,i,j,-1,-1,m,n)) return true;
                }
            }

        }
        return false;

        
    }
};