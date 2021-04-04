class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int res,i=0,j=0;
        vector<int> temp;
        temp = nums1;
        for(res = 0;res<(m+n);res++)
        {
            if(i<m && j<n){
                if(temp[i]<nums2[j])
                {
                    nums1[res]=temp[i++];
                }
                else
                {
                    nums1[res]=nums2[j++];
                }
            }
            else{
                if(i<m)
                    nums1[res]=temp[i++];
                else
                    nums1[res]=nums2[j++];
            }
        }
    }
};