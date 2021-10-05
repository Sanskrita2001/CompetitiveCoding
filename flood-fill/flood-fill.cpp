class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size(), n = image[0].size();
        queue<pair<int, int>> q;
        q.push({sr, sc});
        int color = image[sr][sc];
        image[sr][sc] = newColor;
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            
            q.pop();
            
            int dx[4]={-1,0,1,0};
            int dy[4]={0,1,0,-1};
            
            for(int i=0;i<4;i++){
                int nr = r+dx[i];
                int nc = c+dy[i];
                
                if(nr>=0 && nc>=0 && nr<m && nc<n && image[nr][nc]==color && image[nr][nc]!=newColor){
                    image[nr][nc]=image[r][c];
                    q.push({nr,nc});
                }
            }
        }
        return image;
    }
};