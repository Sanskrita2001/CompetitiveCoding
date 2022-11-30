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
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return helper(dp,grid,0,0,m,n);
    }
};