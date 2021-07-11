#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    int n1 = a.size();
    int n2 = b.size();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ptr1 = 0, ptr2 = 0;
    int diff = INT_MAX;
    pair <int,int> res;
    while(ptr1<n1 && ptr2<n2){
        if(diff>(abs(a[ptr1]-b[ptr2]))){
            diff=abs(a[ptr1]-b[ptr2]);
            res.first=a[ptr1];
            res.second=b[ptr2];
        }
        if(a[ptr1]<b[ptr2])
            ptr1++;
        else
            ptr2++;
    }
    return res;
}

int main()
{
    // Input given array A
    vector<int> A = {1, 2, 11, 5};
 
    // Input given array B
    vector<int> B = {4, 12, 19, 23, 127, 235};
 
    // Call function to print
    // smallest result
    pair<int,int> res = minDifference(A, B);
    cout<<res.first<<"\n";
    cout<<res.second;

    return 0;
}
