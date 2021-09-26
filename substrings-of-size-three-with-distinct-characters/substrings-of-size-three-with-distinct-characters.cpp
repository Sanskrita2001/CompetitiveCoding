class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int> m;
        int count=0;
        int i=0,j=0;
        int n=s.size();
        while(j<n){
            m[s[j]]++;
            if(j-i+1<3){
                j++;
            }
            else if(m.size()==3){
                count++;
                m.erase(s[i]);
                i++;
                j++;
            }
            else{
                m[s[i]]--;
                if(m[s[i]]==0)
                    m.erase(s[i]);
                i++;
                j++;
            }
        }
        return count;
    }
};