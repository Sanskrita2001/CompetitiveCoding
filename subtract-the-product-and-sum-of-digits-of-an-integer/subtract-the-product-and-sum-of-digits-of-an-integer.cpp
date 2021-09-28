class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;
        for(;n>0;n=n/10){
            prod*=(n%10);
            sum+=(n%10);
        }
        return (prod-sum);
    }
};