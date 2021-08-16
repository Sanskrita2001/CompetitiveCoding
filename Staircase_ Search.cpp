#include<bits/stdc++.h>
using namespace std;


pair<int,int> search(int m, int n, vector<vector<int>> v, int k){
    //write your code here.
    pair<int,int> p;
    int i=0,j=m-1;
    while(i<m && j>=0){
        if(v[i][j]==k){
            p.first=i;
            p.second=j;
        }
        if(v[i][j]<k)
            i++;
        else
            j--;
    }
    return p;
}
