class Solution {
public:
    int recur(int n,int dp[]){
        if(n==0 || n==1)
            dp[n]=1;
        if(n<0)
            return 0;
        if(dp[n]!=0)
            return dp[n];
        dp[n]=recur(n-1,dp)+recur(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        int dp[n+1];
        for(int i=0;i<=n;i++)
            dp[i]=0;
        int ans = recur(n,dp);
        return ans;
    }
};