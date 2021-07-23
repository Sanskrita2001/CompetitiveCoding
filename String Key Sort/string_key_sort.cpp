#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>

using namespace std;

string extractToken(string str,int key){
    char *s=strtok((char *) str.c_str()," ");
    while(key>1){
        s=strtok(NULL," ");
        key--;
    }
    return (string)s;
}
bool lexicographicalCompare(pair<string,string> s1,pair<string,string>s2){
    string key1 = s1.second;
    string key2 = s2.second;
    
    return key1<key2;
}
bool numericalCompare(pair<string,string> s1,pair<string,string>s2){
    string key1 = s1.second;
    string key2 = s2.second;
    
    return stoi(key1)<stoi(key2);
}
int main()
{
    int n;
    cin>>n;
    
    cin.get();
    
    string temp;
    vector<string> v ;
    for (int i = 0; i < n; i++) {
        /* code */
        getline(cin,temp);
        v.push_back(temp);
    }
    int key;
    string reversal,ordering;
    cin>>key>>reversal>>ordering;
    vector<pair<string,string>> token ;
    for (int i = 0; i < n; i++) {
        token.push_back({v[i],extractToken(v[i],key)});
    }
    if(ordering=="lexicography"){
        sort(token.begin(),token.end(),lexicographicalCompare);
    }
    else
        sort(token.begin(),token.end(),numericalCompare);
    if(reversal=="true")
        reverse(token.begin(),token.end());
    
    for (int i = 0; i < n; i++) {
        std::cout << token[i].first << std::endl;
    }
    return 0;
}
