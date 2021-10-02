class Solution {
public:
    vector<vector<int>> res;
    int sum=0;
    void generateSubset(vector<int>& nums, int i,vector<int>& output,int n,int target){
            if(target==0){
                res.push_back(output);
                return;
            }
            if(target<0)    
                return;
        for(int idx=i;idx<nums.size();idx++){
            if(idx>i && nums[idx]==nums[idx-1])
                continue;
            output.push_back(nums[idx]);
            generateSubset(nums,idx+1,output,n,target-nums[idx]);
            output.pop_back();
        }
             
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> output;
        sort(nums.begin(),nums.end());
        generateSubset(nums,0,output,nums.size(),target);
        return res;
    }
};