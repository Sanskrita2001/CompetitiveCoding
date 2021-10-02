class Solution {
public:
    int sum=0;
    void XORSum(vector<int>& nums,int i,int n,vector<int>& res){
        if(i==n){
            int Xor=0;
            for(auto i:res)
                Xor^=i;
            sum+=Xor;
            return;
        }
        res.push_back(nums[i]);
        XORSum(nums,i+1,n,res);
        res.pop_back();
        XORSum(nums,i+1,n,res);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> res;
        XORSum(nums,0,nums.size(),res);
        return sum;
    }
};