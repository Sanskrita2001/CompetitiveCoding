class Solution {
public:
    void solve(vector<int> &nums,vector<vector<int>> &output,vector<int> &v, int start){
        if(start==nums.size()){
            output.push_back(v);
            return;
        }
        v.push_back(nums[start]);
        solve(nums,output,v,start+1);
        v.pop_back();
        solve(nums,output,v,start+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> v;
        int start=0;
        solve(nums,output,v,start);
        return output;
    }
};