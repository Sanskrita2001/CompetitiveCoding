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
        vector<vector<int>> dp (m,vector<int> (n,-1));
        return recur(dp,0,0,m,n);
    }
};