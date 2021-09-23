class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//         int i=0;
//         int j=nums.size();
        
//         while(i<j-1){
//             if(nums[i]==0 && nums[i+1]!=0){
//                 nums[i]=nums[i+1];
//                 nums[i+1]=0;
//             }
//             cout<<nums[i]<<i<<" ";    
//             i++;
//         }
        int n=nums.size();
        int j=0;
        vector<int> res(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                res[j++]=nums[i];
        }
        for(int i=0;i<n;i++)
            nums[i]=res[i];
    }
};