class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& nums,int i,int n,int t,vector<int>& res){
        if(i==n){
            if(t==0){
                ans.push_back(res);
                return;
            }
            else{
                return;
            }
        }
        if(t>0){
            res.push_back(nums[i]);
            helper(nums,i,n,t-nums[i],res);
            res.pop_back();
        }
            helper(nums,i+1,n,t,res);
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> res;
        helper(nums,0,nums.size(),target,res);
        return ans;
    }
};