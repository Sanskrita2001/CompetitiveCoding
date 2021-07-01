class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set <int> set ;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            int x = target - nums[i];
            if(set.find(x) != set.end()){
                auto it = find(nums.begin(), nums.end(), x);
                int index = it - nums.begin();
                result.push_back(index);
                result.push_back(i);
            }
            set.insert(nums[i]);
        }
        return result;
    }
};