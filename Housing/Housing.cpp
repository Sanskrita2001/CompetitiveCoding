#include <iostream>

using namespace std;

void housing(int *arr, int n,int k){
    int i=0,j=0;
    int sum=0;
    while(j<n){
        //append right
        sum+=arr[j];
        j++;
        //remove elements
        while(sum>k && i<j){
            sum-=arr[i];
            i++;
        }
        //check if sum == k
        if(sum==k){
            cout<<i<<" "<<j-1<<endl;
        }
    }
    return;
}
int main()
{
    int plots[]={1,3,2,1,4,1,3,2,1,1};
    int n=sizeof(plots)/sizeof(int);
    int k=8;
    housing(plots,n,k);
    return 0;
}
