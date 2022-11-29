class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,hi=nums.size()-1;
        while(mid<=hi){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
                mid++;
            else if(nums[mid]==2){
                swap(nums[mid],nums[hi]);
                hi--;
            }
        }
    }
};