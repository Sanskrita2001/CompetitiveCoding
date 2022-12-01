class Solution {
public:
    bool isvowel(char v) {
        return (0x208222>>(v&0x1f))&1;
    }
    bool halvesAreAlike(string s) {
        int n = s.length();
        int mid = n/2;
        string first = s.substr(0,mid);
        string second = s.substr(mid);
        int fcount=0,scount=0;
        for(int i=0;i<first.size();i++){
            if(isvowel(first[i]))
                fcount++;
        }
        for(int i=0;i<second.size();i++){
            if(isvowel(second[i]))
                scount++;
        }
        return fcount==scount;
    }
};