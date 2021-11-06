class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        cout<<res;
        int rightbit = res & -res;
        cout<<rightbit;
        int a=0,b=0;
        for(int i:nums){
            if(rightbit & i)
                a=a^i;
            else
                b=b^i;
        }
        return {a,b};
    }
};