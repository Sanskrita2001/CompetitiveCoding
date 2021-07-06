class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> sort_nums;
        sort_nums = nums;
        sort(sort_nums.begin(), sort_nums.end());
        int left = n,right=0;
        for(int i=0;i<n;i++){
            if(sort_nums[i]!=nums[i]){
                left=min(left,i);
                right=max(right,i);
            }
        }
        return (right-left>=0?right-left+1:0);
    }
};