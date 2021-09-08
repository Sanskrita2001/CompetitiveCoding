class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int x=0;
        for(int i=s.size()-1;i>=0;i--){
            x=(x+shifts[i])%26;
            s[i] = (s[i] - 'a' + x) % 26 + 'a';
        }
        return s;
    }
};