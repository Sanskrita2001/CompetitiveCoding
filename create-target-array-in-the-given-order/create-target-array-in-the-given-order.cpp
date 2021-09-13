class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            // if(res[index[i]]==0){
            //     res[index[i]]=nums[i];
            // }
            // else{
            //     res[index[i]+1]=res[index[i]];
            //     res[index[i]]=nums[i];
            // }
            res.insert(res.begin()+index[i],nums[i]);
        }
        return res;
    }
};