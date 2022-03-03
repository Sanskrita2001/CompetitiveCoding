class Solution {
public:
    int findMin(vector<int>& a) {
        int low=0,high=a.size()-1;
        int mid = (low+high)/2;
        while(low<high){
            mid = (low+high)/2;
            if(a[mid]<a[high])
                high=mid;
            else if(a[mid]>a[high])
                low=mid+1;
            else
                high--;
        }
        return a[high];
    }
};