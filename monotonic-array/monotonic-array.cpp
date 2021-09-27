class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag1=0,flag2=0;
        int n=nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1])
                flag1++;
            if(nums[i]<=nums[i+1])
                flag2++;
        }
        if(flag1==n-1||flag2==n-1)
            return true;
        return false;
    }
};