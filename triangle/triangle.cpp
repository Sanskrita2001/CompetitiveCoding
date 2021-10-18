class Solution {
public:
    int dp[1000][1000];
    int solve(vector<vector<int>>& nums, int i,int j, int n){
        if(i>=n){
            return 0;
        }
        if(dp[i][j]!= -1)
            return dp[i][j];
        
        int op1 = nums[i][j] + solve(nums,i+1,j,n);
        int op2 = nums[i][j] + solve(nums,i+1,j+1,n);
        return dp[i][j] = min(op1,op2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
        return solve(triangle,0,0,triangle.size());
    }
};