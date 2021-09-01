class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        unordered_set<int> visited;
        int count = 0, max_count = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            while (visited.count(i) == 0)
            {
                count ++;
                visited.insert(i);
                i = nums[i];
            }
            max_count = max(count, max_count);
            count = 0;
        }
        return max_count;
    }
};