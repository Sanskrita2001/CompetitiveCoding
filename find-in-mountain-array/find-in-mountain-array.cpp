/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findPeakEle(MountainArray &mountainArr){
        int start=0;
        int end=mountainArr.length()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(mountainArr.get(mid)>mountainArr.get(mid+1))
                end=mid;
            else
                start=mid+1;
        }
        return start;
    }
    int binarySearch(MountainArray &mountainArr,int s,int e,int target){
        cout<<s<<e<<" ";
        bool isAsc = mountainArr.get(s)<mountainArr.get(e);
        while(s<=e){
            int m=s+(e-s)/2;
            if(mountainArr.get(m)==target)
                return m;
            if(isAsc){
                if(mountainArr.get(m)>target)
                e=m-1;
                else
                s=m+1;
            }
            else{
                if(mountainArr.get(m)>target)
                s=m+1;
                else
                e=m-1;
            }
                
            
        }
        return -1; 
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak=findPeakEle(mountainArr);
        cout<<peak;
        int left=binarySearch(mountainArr,0,peak,target);
        int right=binarySearch(mountainArr,peak+1,mountainArr.length()-1,target);
        if(left!=-1)
            return left;
        else if(right!=-1)
            return right;
        else
            return -1;
    }
};