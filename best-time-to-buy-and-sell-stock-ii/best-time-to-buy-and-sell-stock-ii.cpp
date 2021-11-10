class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int peak = prices[0];
        int valley = prices[0];
        int maxp=0;
        int n = prices.size()-1;
        if(n==0)
            return 0;
        int i=0;
        while(i<n){
            cout<<i;
            while(i<n && prices[i]>=prices[i+1])
                i++;
            valley=prices[i];    
            while(i<n && prices[i]<=prices[i+1])
                i++;
            peak=prices[i];
            maxp+=peak-valley;
        }
        return maxp;
    }
};