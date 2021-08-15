class Solution {
public:
    int partition(vector<int>& nums, int s,int e){
        int i=s-1;
        int p=nums[e];
        for(int j=s;j<e;j++){
            if(nums[j]>p){
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[e]);
        return i+1;
    }
    int quickselect(vector<int>& nums,int s,int e,int k){
        int p=partition(nums,s,e);
        if(p==k)
            return nums[p];
        else if(k<p)
            return quickselect(nums,s,p-1,k);
        else
            return quickselect(nums,p+1,e,k);
    }
    int findKthLargest(vector<int>& nums, int k) {
        if( k==1){
            return *max_element(nums.begin(), nums.end());
        }
        if(nums.size()==2 and k==2){
            return *min_element(nums.begin(), nums.end());
        }
        if(nums.size()==1)
            return nums[0];
        return(quickselect(nums,0,nums.size()-1,k-1));
        
    }
};