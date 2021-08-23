class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minsum=INT_MAX;
        int res=0;
        sort(nums.begin(),nums.end());
        int currsum=0;
        int n=nums.size();
        for(int i=0;i<=nums.size()-3;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                res=nums[i]+nums[j]+nums[k];
                if(res==target)
                    return res;
                if(abs(res-target)<minsum){
                    minsum=abs(res-target);
                    currsum=res;   
                }
                if(res<target)
                    j++;
                else
                    k--;
                
            }
        }
        return currsum;
    }
};