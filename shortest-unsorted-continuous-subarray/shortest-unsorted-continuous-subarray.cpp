class Solution {
public:
    bool outOfOrder(vector<int> arr,int i){
        int x=arr[i];
        if(i==0)
        {
            return x>arr[i+1];
        }
        if(i==arr.size()-1){
            return x<arr[i-1];
        }
        return x>arr[i+1] or x<arr[i-1];
    }
    int findUnsortedSubarray(vector<int>& a) {
         int smallest = INT_MAX;
        int largest = INT_MIN;
        if(a.size()==1)
            return 0;
        for(int i=0;i<a.size();i++){
        int x=a[i];
        if(outOfOrder(a,i)){
            smallest=min(smallest,x);
            largest=max(largest,x);
        }
        }
        if(smallest==INT_MAX)
            return 0;
        int left=0;
        while(a[left]<=smallest){
            left++;
        }
        int right=a.size()-1;
        while(a[right]>=largest){
            right--;
        }
        return (right-left>=0?right-left+1:0);
    }
};