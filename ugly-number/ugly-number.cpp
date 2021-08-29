class Solution {
public:

    bool isUgly(int n) {
        vector<int> v;
        if(n<1)
            return false;
        if(n==1)
            return true;
        while(n%2==0){
            v.push_back(2);
            n=n/2;
        }
        while(n%3==0){
            v.push_back(3);
            n=n/3;
        }
        for(long i=5;i*i<=n;i+=6){
            while(n%i==0){
                v.push_back(i);
                n=n/i;
            }
            while(n%(i+2)==0){
                v.push_back(i+2);
                n=n/(i+2);
            }    
        }
        if(n>3)
            v.push_back(n);
        for(auto i:v)
            cout<<i<<" ";
        int flag=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==2 || v[i]==3 || v[i]==5)
                continue;
            else
                flag=1;
        }
        if(flag==0)
        return true;
        else
            return false;
    }
};