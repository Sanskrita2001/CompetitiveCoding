class Solution {
public:
    int DIR[5]= {0,1,0,-1,0};
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int peri=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)
                    continue;
                peri+=4;
                for(int k=0;k<4;k++){
                    int ni=i+DIR[k];
                    int nj=j+DIR[k+1];
                    if(ni<0||nj<0||ni==m||nj==n||grid[ni][nj]==0)
                        continue;
                    peri-=1;
                }
            }
        }
        return peri;
    }
};