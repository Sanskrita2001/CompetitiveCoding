#include <iostream>
#include <vector>

using namespace std;

int binary(vector<int> v,int start,int end,int t){
    while(start<=end){
        int mid=(start+end)/2;
        if(v[mid]==t)
            return mid+1;
        else if(v[mid]<t)
            start=mid+1;
        else
            end=mid-1;
    }
    return -1;
}

int main()
{
    cout<<"Hello World";
    int start=0;
    int end=1;
    int t=5;
    vector<int> v={1,2,4,5,6,8,9,12,14,15,20};
    while(v[end]<t){
        int temp=end;
        end=end+(end-start+1)*2;
        start=temp+1;
    }
    cout<<binary(v,start,end,t);
    return 0;
}
