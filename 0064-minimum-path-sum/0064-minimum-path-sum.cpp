class Solution {
public:
    long long helper(vector<vector<int>>& dp,vector<vector<int>>& grid,long long i,long long j,long long n,long long m){
        if(i>=n || j>=m || i<0 || j<0)
            return INT_MAX;
        if(i==n-1 && j==m-1)
            return grid[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        long long right = (long long)grid[i][j]+helper(dp,grid,i+1,j,n,m);
        long long down = (long long)grid[i][j]+helper(dp,grid,i,j+1,n,m);
        long long path = min(right,down);
        return dp[i][j]=path;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        dp[n-1][m-1]=grid[n-1][m-1];
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                long long right = INT_MAX, down=INT_MAX;
                if(i==n-1&&j==m-1)
                    continue;
                if(i+1<n)
                    right = (long long)grid[i][j]+dp[i+1][j];
                if(j+1<m)
                    down = (long long)grid[i][j]+dp[i][j+1];
                long long path = min(right,down);
                dp[i][j]=path;
            }
        }
        return dp[0][0];
    }
};