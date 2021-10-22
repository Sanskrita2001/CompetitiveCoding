class Solution {
public:
    string frequencySort(string s) {
        unordered_map<int,int> m1;
        multimap<int,char,greater<int>> m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(auto i:m1)
            m2.insert({i.second,i.first});
        string res="";
        for(auto i:m2){
            for(int in=0;in<i.first;in++)
                res+=i.second;
        }
        return res;
    }
};