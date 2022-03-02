class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=t.length()-1;
        int j=s.length()-1;
        while(j>-1 && i>-1){
            if(s[j]==t[i]){
                j--;
                i--;
            }else{
                i--;
            }
        }
        if(j==-1)
            return true;
        else
            return false;
    }
};