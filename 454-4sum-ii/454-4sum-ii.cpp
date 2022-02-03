class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        int count=0;
        map<int,int> ij_map;
        for(int i:nums1){
            for(int j:nums2){
                ij_map[i+j]++;
            }
        }
        for(int k:nums3){
            for(int l:nums4){
                count += ij_map[-(k+l)];
            }
        }
        return count;
    }
};