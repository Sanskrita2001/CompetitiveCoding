class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            cout<<mid;
            if(mid<end && nums[mid]>nums[mid+1])
                return nums[mid+1];
            else if(mid>start && nums[mid-1]>nums[mid])
                return nums[mid];
            if(nums[mid]>=nums[start])
                start=mid+1;
            else
                end=mid-1;
        }
        return nums[0];
    }
};