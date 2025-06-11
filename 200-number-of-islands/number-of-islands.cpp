class Solution {
public:
 void check(vector<vector<char>>& grid, vector < vector < int >> & arr,int i ,int j)
    {
        arr[i][j]=1;
        int r[]={-1,0,1,0};
        int c[] = {0,1,0,-1};
            for(int l=0;l<4;l++)
            {
            if(i+r[l]>=0 && i+r[l]<grid.size() && j+c[l]>=0 && j+c[l]<grid[0].size())
                {
                    if(arr[i+r[l]][j+c[l]]==0 && grid[i+r[l]][j+c[l]]=='1')
                    {
                        check(grid,arr,i+r[l],j+c[l]);
                    }
                }
            }
        }


    



    int numIslands(vector<vector<char>>& grid) {
    int x = grid.size();
    int y = grid[0].size();
    vector < vector < int >> arr(x, vector < int > (y, 0));
    int c=0;
    for(int i =0;i<x;i++)
    {
        for(int j = 0;j<y;j++)
        {
            if(arr[i][j]==0 && grid[i][j]=='1')
            {
                c++;
                check(grid,arr,i,j);
            }

        }
    }return c;
        
    }
};