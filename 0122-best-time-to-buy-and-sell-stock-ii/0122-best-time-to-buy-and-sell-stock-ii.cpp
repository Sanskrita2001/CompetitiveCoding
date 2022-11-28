class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int valley = INT_MAX, peak = INT_MIN;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            while((i+1)<prices.size() && prices[i]>prices[i+1]){
                i++;
            }
            valley = prices[i];
            while((i+1)<prices.size() && prices[i]<=prices[i+1]){
                i++;
            }  
            peak = prices[i];
            profit+=(peak-valley);
        }
        return profit;
    }
};