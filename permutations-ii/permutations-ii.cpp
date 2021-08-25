class Solution {
public:
    vector<vector<int>> ans;
    void permutation(vector<int>& nums,int i){
    int n=nums.size();
    if(i==n){
      ans.push_back(nums);
      return;
    }
    set<int> s;
    for(int idx=i;idx<n;idx++){
        if(s.find(nums[idx])!=s.end())
            continue;
        s.insert(nums[idx]);
        swap(nums[i],nums[idx]);
        permutation(nums,i+1);
        swap(nums[i],nums[idx]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permutation(nums,0);
        //vector<vector<int>> output(ans.begin(),ans.end());
        return ans;
    }
};