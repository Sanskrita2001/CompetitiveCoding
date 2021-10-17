class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dis(m,vector<int> (n, INT_MAX));
        if(m==0){
            return mat;
        }
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    dis[i][j]=0;
                    q.push({i,j});
                }  
            }
        }
        int dx[] ={-1,0,1,0};
        int dy[] ={0,1,0,-1}; 
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int new_x = x+dx[i];
                int new_y = y+dy[i];
                if(new_x>=0 && new_y>=0 && new_x<m && new_y<n){
                    if(dis[new_x][new_y]>dis[x][y]+1){
                        dis[new_x][new_y]=dis[x][y]+1;
                        q.push({new_x,new_y});
                    }
                }
            }
        }
        return dis;
    }
};