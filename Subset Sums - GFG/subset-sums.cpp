// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
vector<int> res;
int sum=0;
    void helper(vector<int> arr,int i, int N){
        if(i==N){
           res.push_back(sum);
           return; 
        }
        sum+=arr[i];    
        helper(arr,i+1,N);
        sum-=arr[i];
        helper(arr,i+1,N);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        helper(arr,0,N);
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends