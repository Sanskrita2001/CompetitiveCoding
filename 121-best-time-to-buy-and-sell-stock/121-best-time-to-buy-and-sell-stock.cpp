class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        int maxP=0;
        for(int i=0;i<prices.size();i++){
            int j=i+1;
            while(j<prices.size() && prices[i]<prices[j]){
               maxP=max(prices[j]-prices[i],maxP);
                j++;
            }  
        }
        return (maxP);
    }
};