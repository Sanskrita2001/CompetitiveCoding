class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int cs=0;
        vector<int> ans;
      for(int i=0;i<nums.size();i++){
          cs+=nums[i];
          ans.push_back(cs);
      }  
        return ans;
    }
};