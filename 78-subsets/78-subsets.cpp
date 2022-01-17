class Solution {
public:
    
    void findSubsets(int i,vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        findSubsets(i+1,nums,ans,ds);
        ds.pop_back();
        findSubsets(i+1,nums,ans,ds);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        findSubsets(0,nums,ans,ds);
        return ans;
    }
};