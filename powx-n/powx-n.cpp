class Solution {
public:
    double myPow(double x, int n) {
        // int t=abs(n);
        // if(t==0)
        //     return 1;
        // x= x*myPow(x,t-1);
        // if(n>0)
        //     return x;
        // else
        //     return 1/x;
        if(n==0)
            return 1;
        if(n<0){
            x=1/x;
            n=abs(n);
        }
        if(n==1)
            return x;
        double ans = myPow(x,floor(n/2));
        if(n%2)
            return ans*ans*x;
        return ans*ans;
    }
};