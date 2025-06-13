class Solution {
public:

    void change(vector<vector<int>>& image,int i, int j, int color,int x)
    {
        // vis[i][j]=1;
         image[i][j]=color;
        // else return;
        int d[]= {-1,0,1,0};
        int c[] = {0,1,0,-1};
        for(int k=0;k<4;k++)
        {
            if(i+d[k]>=0&& i+d[k]<image.size()&&j+c[k]>=0&&j+c[k]<image[0].size())
            {
                if(image[i+d[k]][j+c[k]]==x) change(image,i+d[k],j+c[k],color,x);
            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    //    vector<vector<int>> vis(image.size(),vector<int>(image[0],size()));
    int x = image[sr][sc];
    if (x == color) return image; 
        change(image,sr,sc,color,x);

        return image;
    }
};