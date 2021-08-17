class Solution {
public:
    int binarySearch(vector<int>& nums,int target,int flag){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                ans=mid;
                if(flag==0){
                    e=mid-1;  
                }
                else
                    s=mid+1;
                
            }
            else if(nums[mid]<target)
                s=mid+1;
            else
                e=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(binarySearch(nums,target,0));
        v.push_back(binarySearch(nums,target,1));
//         if(v.empty()){
//             v.push_back(-1);
            
//         }
            
        return v;
    }
};