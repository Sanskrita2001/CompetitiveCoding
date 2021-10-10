class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int bit=left;
        if(left==0||right==0)
            return 0;
        if ((int)log2(left) != (int)log2(right)) return 0;
        for(unsigned long i=left;i<=right;i++){
            bit=bit&i;
        }
        return bit;
    }
};