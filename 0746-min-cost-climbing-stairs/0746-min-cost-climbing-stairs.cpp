class Solution {
public:
    int recur(vector<int>&dp, vector<int>& cost,int i,int n){
        if(i>=n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int one = cost[i]+recur(dp,cost,i+1,n); 
        int two = cost[i]+recur(dp,cost,i+2,n);
        int res = min(one,two);
        return dp[i]=res;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();  
        vector<int> dp(n+2,-1);
        
        dp[n]=dp[n+1]=0;
        
        for(int i=n-1;i>=0;i--){
            int one = cost[i]+dp[i+1]; 
            int two = cost[i]+dp[i+2];
            int res = min(one,two);
            dp[i]=res;
        }
        
        return min(dp[1],dp[0]);    
    }
};