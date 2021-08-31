class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            cout<<i.first<<i.second<<" ";
        }
        unordered_set<int> us;
        for(auto i:mp){
            us.insert(i.second);
        }
        if(us.size()==1)
        return true;
        else
        return false;
    }
};