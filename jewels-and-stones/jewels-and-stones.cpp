class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> s;
        for(int i=0;i<jewels.size();i++)
            s.insert(jewels[i]);
        int count=0;
        for(int i=0;i<stones.size();i++){
            if(s.find(stones[i])!=s.end())
               count++; 
        }
        return count;
    }
};