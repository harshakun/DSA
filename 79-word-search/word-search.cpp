class Solution {
public:
    bool check(vector<vector<char>>& board,int m , int n, string &word,vector<vector<int>> &vis,int i , int j, int p)
    {if(p == word.size()) return true;
        
        vis[i][j]=1;
        int r[]={0,-1,0,1};
        int c[]={-1,0,1,0};
        for(int k =0;k<4;k++)
        {
            if(i+r[k]>=0 && i+r[k]<m &&j+c[k]>=0 && j+c[k]<n)
            {
                if(vis[i+r[k]][j+c[k]] == -1 && board[i+r[k]][j+c[k]]==word[p])
                {   if(p == word.size()-1) return true;
                    if(check(board,m,n,word, vis , i+r[k],j+c[k],p+1)) return true;
                }
            }
        }
        vis[i][j]=-1;
        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        int p=0;
        vector<vector<int>> vis(m,vector<int>(n,-1));
        for(int i =0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[p]){
                    if(check(board,m,n,word,vis,i,j,p+1)) return true;
                }

            }
        }
        return false;
    }
};