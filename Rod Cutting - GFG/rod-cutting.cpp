//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    
    int recur(vector<int> &dp, int price[],int n){
        if(n==0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        int maxi=0;
        for(int j=1;j<=n;j++){
            int cost = price[j-1]+ recur(dp,price,n-j);
            maxi = max(cost,maxi);
        }
        return dp[n]=maxi;
    } 
    int cutRod(int price[], int n) {
        //code here
        vector<int> dp(n+1,-1);
        return recur(dp,price,n);
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