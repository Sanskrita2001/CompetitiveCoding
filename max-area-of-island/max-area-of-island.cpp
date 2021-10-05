class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int area = 0;
        
        int vis[m][n];
        memset(vis,0,sizeof(vis));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    vis[i][j]=1;
                    int cur_area=1;
                    
                    int dx[]={1,0,-1,0};
                    int dy[]={0,1,0,-1};
                    
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        
                        for(int i=0;i<4;i++){
                            int nx=x+dx[i];
                            int ny=y+dy[i];
                            
                            if(nx>=0 && ny>=0 && nx<m && ny<n && grid[nx][ny] && !vis[nx][ny]){
                                vis[nx][ny]=1;
                                q.push({nx,ny});
                                cur_area++;
                            }
                        }
                    }
                    area=max(area,cur_area);
                }
            }
        }
        return area;
    }
};