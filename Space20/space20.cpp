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
    for (int i = strlen(str)-1; i >=0; i--) {
        /* code */
        if(str[i]==' '){
            str[i-2]='%';
            str[i-1]='2';
            str[i]='0';
        }
        str[n--]=str[i];
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
