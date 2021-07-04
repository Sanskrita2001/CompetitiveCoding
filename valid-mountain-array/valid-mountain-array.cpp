class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i=0;
        while(i+1<n && arr[i]<arr[i+1])
            i++;
        if(i+1==n || i==0)
            return false;
        while(i+1<n && arr[i]>arr[i+1])
            i++;
        if(i+1==n)
            return true;
        else
            return false;
    }
};