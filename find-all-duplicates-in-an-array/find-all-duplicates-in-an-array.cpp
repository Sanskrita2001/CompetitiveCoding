class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> res;
        for(auto i:m){
            cout<<i.first<<i.second<<"\n";
            if(i.second==2)
                res.push_back(i.first);
        }
        return res;
    }
};