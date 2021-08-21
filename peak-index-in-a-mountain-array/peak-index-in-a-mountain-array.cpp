class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int max=INT_MIN;
        while(s<e){
            int m=(s+e)/2;
            if(arr[m]>arr[m+1]){
                e=m;
            }
            else
                s=m+1;
            
        }
        if(s==e)
        return s;
        return e;
    }
};