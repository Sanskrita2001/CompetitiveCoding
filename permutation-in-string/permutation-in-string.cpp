class Solution {
public:
    bool matches(int s1map[],int s2map[]){
        for(int i=0;i<26;i++){
            if(s1map[i]!=s2map[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
            return false;
        int s1map[26]{0},s2map[26]{0};
        for(int i=0;i<s1.length();i++){
            s1map[s1[i]-'a']++;
            s2map[s2[i]-'a']++;
        }
        for(auto i:s2map)
            cout<<i;
        for(int i=0;i<s2.length()-s1.length();i++){
            if(matches(s1map,s2map))
                return true;
            s2map[s2[i+s1.length()]-'a']++;
            s2map[s2[i]-'a']--;
        }
        return matches(s1map,s2map);
    }
};