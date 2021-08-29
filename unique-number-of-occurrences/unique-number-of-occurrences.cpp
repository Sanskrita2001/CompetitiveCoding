class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int> fmap;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(fmap.find(arr[i])==fmap.end())
                fmap.insert(make_pair(arr[i],1));
            else
                fmap[arr[i]]++;
        }
        set<int> s;
        for(auto i:fmap){
            cout<<i.first<<" "<<i.second<<endl;
            s.insert(i.second);
        }
        
        // for(int i=1;i<=fmap.size();i++){
        //     if(fmap[i]!=0)
        //     s.insert(fmap[i]);
        // }
        if(s.size()==fmap.size())
        return true;
        else
        return false;
    }
};