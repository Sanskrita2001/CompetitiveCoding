class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> pref_sum(nums.size());
        pref_sum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pref_sum[i]=nums[i]+pref_sum[i-1];
        }
        for(auto i:pref_sum){
            cout<<i;
        }
        int mine=0;
        for(int i=0;i<pref_sum.size();i++){
            mine=min(pref_sum[i],mine);
        }
        // int x = abs(min)
        return (abs(mine)+1);
    }
};