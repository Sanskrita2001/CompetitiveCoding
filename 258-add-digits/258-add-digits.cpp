class Solution {
public:
    int addDigits(int num) {
        int add=0;
        while(num>=10){
            add=0;
            for(;num>0;num/=10){
                add+=num%10;
            }
            num=add;
        }
        return num;
    }
};