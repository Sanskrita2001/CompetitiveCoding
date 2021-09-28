class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        vector<int> e;
        vector<int> o;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                e.push_back(nums[i]);
            }
            else
                o.push_back(nums[i]);
        }
        int ei=0,oi=0;
        for(int i=0;i<n;i++){
            if(i%2)
                res.push_back(o[ei++]);
            else
                res.push_back(e[oi++]);
        }
        return res;
    }
};