class Solution {
public:
    set<vector<int>> ans;
    void subsets(vector<int>& nums,int i,int n,vector<int>& res){
        if(i==n){
            ans.insert(res);
            return;
        }
        res.push_back(nums[i]);
        subsets(nums,i+1,n,res);
        res.pop_back();
        subsets(nums,i+1,n,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        subsets(nums,0,nums.size(),res);
        vector<vector<int>> output(ans.begin(),ans.end());
        return output;
    }
};