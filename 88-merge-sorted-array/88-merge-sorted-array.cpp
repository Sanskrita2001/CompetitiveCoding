class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int last = m+n-1;
        while(j>=0 && i>=0){
            if(nums2[j]>nums1[i]){
                nums1[last]=nums2[j];
                j--;
            }else{
                nums1[last]=nums1[i];
                i--;
            }
            last--;
        }
        while(j>=0){
            nums1[last--]=nums2[j--];
        }
    }
};