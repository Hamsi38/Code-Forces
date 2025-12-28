#include <iostream>

int main(){

    std::string str,result;
    std::cin>>str;

    char first;

    first = str[0];
    if (isupper(first))
    {
        std::cout<<str;
    }
    else
    {
        str[0]=toupper(first);
        std::cout<<str;
    }

    return 0;
}