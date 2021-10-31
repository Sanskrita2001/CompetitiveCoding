class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minEle=INT_MAX;
        int maxEle=INT_MIN;
        for(int i=0;i<nums.size();i++){
            minEle=min(minEle,nums[i]);
            maxEle=max(maxEle,nums[i]);
        }
        for(int i=minEle;i>0;i--){
            if(minEle%i==0 && maxEle%i==0)
                return i;
        }
        return 1;
    }
};