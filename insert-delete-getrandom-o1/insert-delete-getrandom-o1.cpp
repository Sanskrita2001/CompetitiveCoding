class RandomizedSet {
    private:
    vector<int> v;
    unordered_map<int,int> m;
    
    public:
    bool insert(int val) {
        if(m.find(val)!=m.end())
            return false;
        v.push_back(val);
        m[val]=v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(m.find(val)==m.end())
            return false;
        int index = m[val];
        v[index] = v.back();
        v.pop_back();
        m[v[index]] = index;
        m.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */