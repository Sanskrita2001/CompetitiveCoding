class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int window=0;
        int max_window=0;
        unordered_map<char,int> map;
        for(int j=0;j<s.length();j++){
            char ch=s[j];
            //if ch is already in the map and its index is more than start of current window
            if(map.count(ch) && map[ch]>=i){
                cout<<map[ch]<<" ";
                i=map[ch]+1;
                window=j-i;
            }
            map[ch]=j;
            window++;
            max_window=max(window,max_window);
        }
         return max_window;
    }
};