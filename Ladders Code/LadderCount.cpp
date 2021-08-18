#include <iostream>

using namespace std;

int ladder_count(int n){
    if(n<0)
    return 0;
    if(n==0)
        return 1;
    if(n>0)
        return ladder_count(n-3)+ladder_count(n-2)+ladder_count(n-1);
}

int main()
{
    cout<<"Hello World";
    cout<<ladder_count(4);
    return 0;
}
