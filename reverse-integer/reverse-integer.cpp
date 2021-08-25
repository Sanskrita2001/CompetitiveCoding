class Solution {
public:
    int reverse(int n) {
        long rev=0;  
        for(;n!=0;n/=10)
            rev=rev*10+(n%10);
        if(rev>INT_MAX || rev<INT_MIN)
            return 0;
        return rev;
    }
};