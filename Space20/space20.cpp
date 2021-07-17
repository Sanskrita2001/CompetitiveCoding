#include <iostream>
#include <cstring>

using namespace std;

void replace_space(char *str){
    int n = strlen(str);
    int count=0;
    for (int i = 0; i < n; i++) {
        if(str[i]==' ')
            count++;
    }
    n += count*2;
    str[n]='\0';
    for (int i = strlen(str)-1; i>=0; i--) {
        /* code */
        if(str[i]==' '){
            str[n-3]='%';
            str[n-2]='2';
            str[n-1]='0';
            n=n-3;
        }
        else{
        str[n-1]=str[i];
        n--;}
    }
}

int main()
{
    char input[10000];
    cin.getline(input,1000);
    replace_space(input);
    std::cout << input << std::endl;
    return 0;
}
