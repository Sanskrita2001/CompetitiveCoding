class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int n=prices.size();
        if(prices.size()==1){
            return 0;
        }
        for(int i=0;i<n;i++){
            int j=i+1;
            while(i<n && j<n && prices[i]<prices[j]){
                maxp=max(maxp,prices[j]-prices[i]);
                j++;
            }
        }
        return maxp;
    }
};