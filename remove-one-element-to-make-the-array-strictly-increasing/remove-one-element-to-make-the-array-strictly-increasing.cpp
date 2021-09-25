class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count=0,pos=0;
        for(int i=0;i<nums.size()-1;i++){    
            if(nums[i]>=nums[i+1]){
                count++;
                pos=i;
            }  
        }
        cout<<pos;
        if(count>=2)
            return false;
        if(count==0 || pos==nums.size()-2)
            return true;
        if((pos-1>=0)&&nums[pos-1]>=nums[pos+1]&&nums[pos]>=nums[pos+2])
            return false;
        return true;
            
    }
};