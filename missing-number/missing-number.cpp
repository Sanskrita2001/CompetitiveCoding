class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        cout<<sum;
        int cursum=0;
        for(int i=0;i<n;i++){
            cursum+=nums[i];
        }
        return(sum-cursum);
    }
};