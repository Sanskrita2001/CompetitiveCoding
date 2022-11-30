//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    
    int recur(vector<int> &dp, int price[],int i){
        if(i==0)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int maxi=0;
        for(int j=1;j<=i;j++){
            int cost = price[j-1]+ recur(dp,price,i-j);
            maxi = max(cost,maxi);
        }
        return dp[i]=maxi;
    } 
    int cutRod(int price[], int n) {
        //code here
        vector<int> dp(n+1,-1);
        // return recur(dp,price,n);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            int maxi=0;
            for(int j=1;j<=i;j++){
                int cost = price[j-1]+ dp[i-j];
                maxi = max(cost,maxi);
            }
            dp[i]=maxi;  
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends