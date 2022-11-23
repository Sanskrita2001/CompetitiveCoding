class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0;
        if(nums.size()==1)
            return nums;
        int num1;
        int num2;
     
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1)
                count1++;
            else if(nums[i]==num2)
                count2++;
            else if(count1==0){
                count1=1;
                num1=nums[i];
            }
            else if(count2==0){
                count2=1;
                num2=nums[i];
            }  
            else if(nums[i]!=num1 && nums[i]!=num2)
                --count1,--count2;        
        }
        count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(num1==nums[i])
                count1++;
            if(num2==nums[i])
                count2++;
        }
        
        if(count1>nums.size()/3)
            res.push_back(num1);
        if(count2>nums.size()/3)
            res.push_back(num2);
        
        return res;
    }
};