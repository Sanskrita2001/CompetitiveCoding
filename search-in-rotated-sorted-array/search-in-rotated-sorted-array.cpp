class Solution {
public:
    int findPivot(vector<int>& arr){
        int left = 0;
        int right = arr.size() - 1;
        
        // edge case : 1 sized arr, pivot can only be 0
        if(left == right)
            return 0;
        
        //edge case: not rotated array, pivot will be the last index
        if(arr[right] > arr[left])
            return right;
        
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            
            //special handling when mid is 0 or 1
            if(mid == 0){
                if(arr[mid] > arr[mid + 1])
                    return mid;
                else
                    left = mid + 1;
            }
            else if(mid == arr.size() - 1){
                if(arr[mid] < arr[mid - 1])
                    return mid;
                else
                    right = mid -1;
            }
            //the general case
            else{
                //case for the pivot element
                if(arr[mid] > arr[mid+1])
                    return mid;
                // case for the left side, we need mid to go righter
                else if(arr[mid] > arr[0])
                    left = mid + 1;
                //case for right side, we need mid to go lefter
                else if(arr[mid] < arr[0])
                    right = mid -1;
                //case for the valley, the element just after pivot
                else if(arr[mid] < arr[mid + 1])
                    return mid-1;
            }
        }
        
        return -1;
    }
    int binarySearch(vector<int>& nums,int s,int e,int target){
        cout<<s<<e<<" ";
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target)
                return m;
            if(nums[m]>target)
                e=m-1;
            else
                s=m+1;
        }
        return -1; 
    }
    int search(vector<int>& nums, int target) {
        int peakIndex = findPivot(nums);
        
        cout<< nums[peakIndex]<< endl;
        
        if(nums[peakIndex] == target)
            return peakIndex;
        
        int idx = binarySearch(nums, 0, peakIndex - 1, target);
        
        if(idx != -1)
            return idx;
        
        return binarySearch(nums, peakIndex + 1, nums.size() -1 , target);
        
        return -1;
    }
};