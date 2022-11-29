class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int res=0;
        map<char,int> mp;
        while(r<s.length()){
            ++mp[s[r]];
            while(mp[s[r]]>1){
                --mp[s[l]];
                ++l;
            }
            res=max(res,r-l+1);
            ++r;
        }
        return res;
    }
};