class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i].find("--")!= std::string::npos)
                x=x-1;
            else
                x=x+1;
            cout<<x;
        }
        return x;
    }
};
