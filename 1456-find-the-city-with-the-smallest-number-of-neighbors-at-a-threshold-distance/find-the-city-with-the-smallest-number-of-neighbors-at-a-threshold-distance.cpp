class Solution {
public:
    void floydWarshall(vector<vector<int>> &dist) {
        int v=dist[0].size();
        for(int k=0;k<v;k++){
		    for(int i=0;i<v;i++){
			    for(int j=0;j<v;j++){
				    dist[i][j]=min(
				                    dist[i][j] , dist[i][k]+dist[k][j]
				                   );
			    }
		    }
	    }
    }
    vector<vector<int>> createadj(vector<vector<int>>& edge,int v){
        vector<vector<int>> dist(v,vector<int>(v,1e8));
        for(auto vi:edge){
            int i=vi[0];
            int j=vi[1];
            int d=vi[2];
            dist[i][j]=d;
            dist[j][i]=d;
        }
        for(int i=0;i<v;i++){
			    for(int j=0;j<v;j++){
				    if(i==j){
                        dist[i][j]=0;
                    }
			    }
		    }
        return dist;
    }
    int findTheCity(int n, vector<vector<int>>& edges, int d) {
        vector<vector<int>> dist=createadj(edges,n);
        floydWarshall(dist);
        vector<int> row;
        int c=0;
        for(auto v: dist)
        {
            for(int i =0;i<n;i++)
            {
                if(v[i]!=0 && v[i]<=d) c++;
            }
            row.push_back(c);
            c=0;
        }

    int mini = row[0];
int ind = 0;

for (int i = 0; i < n; i++) {
    if (row[i] <= mini) {
        mini = row[i];
        ind = i;
    }
} 
       return ind;
    }
};