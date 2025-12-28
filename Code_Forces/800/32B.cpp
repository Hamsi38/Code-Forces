#include <iostream>
#include <string>

int main(){

    std::string str,str_new;
    std::cin>>str;
    int i=0;
    while (i<str.size())
    {
        if(str[i]=='-' && str[i+1]=='.')
        {
            str_new += '1';
            i += 2;
        }
        else if (str[i]=='-' && str[i+1]=='-')
        {
            str_new +='2';
            i +=2;
        }
        else 
        {
            str_new += '0';
            i++;
        }
    }
    std::cout<<str_new;

    return 0;
}