class Solution {
public:
    int xorOperation(int n, int start) {
        int x=0,res=0;
        for(int i=0;i<n;i++){
            x=start+2*i;
            res=res^x;
        }
        return res;
    }
};