class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int e=s.size()-1;
        while(i<=e){
            int temp=s[i];
            s[i]=s[e];
            s[e]=temp;
            i++;
            e--;
        }
    }
};