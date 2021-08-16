class Solution {
public:
    void sortColors(vector<int>& balls) {
        int n=balls.size();
    int lo=0,mid=0,hi=n-1;
    while(mid<=hi){
        if(balls[mid]==0)
            swap(balls[lo++],balls[mid++]);
        else if(balls[mid]==1)
            mid++;
        else
            swap(balls[mid],balls[hi--]);
    }
    }
};