class Solution {
public:
    int dp[1000];
    int solve(vector<int>& nums, int n){
        if(n<=-1){
            return 0;
        }
        if(dp[n]!= -1)
            return dp[n];
        int op1 = nums[n] + solve(nums,n-2);
        int op2 = solve(nums,n-1);
        return dp[n]=max(op1,op2);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,nums.size()-1);
    }
};