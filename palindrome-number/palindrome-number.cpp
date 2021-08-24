class Solution {
public:
    bool isPalindrome(int n) {
        int temp=n;
        long rev=0;
        for(;n>0;n/=10){
         rev=rev*10+(n%10);   
        }
        if(rev==temp)
            return true;
        else
            return false;
    }
};