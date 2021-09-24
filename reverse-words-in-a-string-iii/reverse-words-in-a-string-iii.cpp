class Solution {
public:
    string reverse(string s){
        int i=0;
        int e=s.size()-1;
        while(i<=e){
            int temp=s[i];
            s[i]=s[e];
            s[e]=temp;
            i++;
            e--;
        }
        return s;
    }
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string res="";
        while (ss >> word) {
            cout << word << endl;
            res+=reverse(word)+" ";
        }
        res.pop_back();
        return res;
    }
};