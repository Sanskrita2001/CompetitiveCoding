class Solution {
public:
    int recur(vector<vector<int>> &dp, int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n)
            return 0;
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        int right = recur(dp,i+1,j,m,n);
        int down = recur(dp,i,j+1,m,n);
        return dp[i][j]=right+down;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp (2,vector<int> (n,1));
        dp[1][n-1]=1;
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int right=0,down=0;
                if(i==m-1 && j==n-1)
                    continue;
                if(i+1<m)
                    right = dp[1][j];
                if(j+1<n)
                    down = dp[0][j+1];
                dp[0][j]=right+down;
            }
            dp[1]=dp[0];
        }
        return dp[0][0];
    }
};