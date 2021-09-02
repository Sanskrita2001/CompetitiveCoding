class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x(n),y(n);
        for(int i=0;i<n;i++){
            x[i]=nums[i];
        }
        int p=0;
        for(int i=n;i<nums.size();i++)
            y[p++]=nums[i];
        int p1=0,p2=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
                nums[i]=x[p1++];
            else
                nums[i]=y[p2++];
        }
        return nums;
    }
};