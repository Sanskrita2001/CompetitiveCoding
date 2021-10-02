class Solution {
public:
    int dp[101][101];
    int helper(int i,int j,int m,int n){
        if(i>=n || j>=m)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i==n-1 && j==m-1){
            return 1;
        }
        int r=helper(i,j+1,m,n);
        int d=helper(i+1,j,m,n);
        return dp[i][j]=r+d;
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return helper(0,0,m,n);
    }
};