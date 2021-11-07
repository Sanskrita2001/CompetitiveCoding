class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){ 
            int correct=nums[i]-1;
            if(nums[i]!=nums[correct])
                swap(nums[i],nums[correct]);
            else
                i++;
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if((i+1)!=nums[i])
                return nums[i];
        }
        return -1;
    }
};