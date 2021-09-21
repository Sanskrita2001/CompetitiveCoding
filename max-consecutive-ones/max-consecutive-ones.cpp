class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount=0;
        int i=0;
        int n=nums.size();
        int count=0;
        while(i<n){
            int j=nums[i];
            
            if(j){
                count++;
                maxCount=max(count,maxCount);
            }
            else
                count =0;
            i++;
        }
        return maxCount;
    }
};