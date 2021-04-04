class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int i;
        for( i=digits.size()-1;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
            }
            else{
                carry+=digits[i];
                digits[i]=carry;
                break;
            }
        }
        if(i<0){
            vector<int> result(digits.size()+1);
            result[0]=1;
            return result;
        }else
            return digits;
    }
};