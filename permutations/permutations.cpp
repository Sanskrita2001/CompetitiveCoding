class Solution {
public:
    vector<vector<int>> output;
     void permutation(vector<int> nums,int i){
        int n=nums.size();
        if(i==n){
            output.push_back(nums);
            return;
        }
        for(int idx=i;idx<n;idx++){
            swap(nums[i],nums[idx]);
            permutation(nums,i+1);
            swap(nums[i],nums[idx]);
        }    
    }
    vector<vector<int>> permute(vector<int>& nums) {
       permutation(nums,0); 
        return output;
    }
};