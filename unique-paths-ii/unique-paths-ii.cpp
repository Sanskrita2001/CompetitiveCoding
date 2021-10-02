class Solution {
public:
    int dp[101][101];
    int helper(int i,int j,int m,int n,vector<vector<int>>& obstacleGrid){
        if(i>=m || j>=n || i<0 || j<0 || obstacleGrid[i][j]==1)
            return dp[i][j]=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i==m-1 && j==n-1){
            return dp[i][j]=1;
        }
        int r=helper(i,j+1,m,n,obstacleGrid);
        int d=helper(i+1,j,m,n,obstacleGrid);
        return dp[i][j]=r+d;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof(dp));
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        return helper(0,0,m,n,obstacleGrid);
        
    }
};