class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size();
        if(target<=nums[0])
            return 0;
        if(target>nums[e-1])
            return e;
        int m;
        while(s<=e){
            m=s+(e-s)/2;
            if(nums[m]==target || (nums[m]>target && nums[m-1]<target))
                return m;
            else if(nums[m]<target)
                s=m+1;
            else
                e=m-1;
        }
        return m+1;
    }
};