#include <iostream>
#include <string>
#include <list>

int main(){

    std::string input;
    std::cin>>input;
    int len = input.length(),a=0,b=0,c=0;

    for (int i = 0; i < len; i++)
    {
        if(input[i]=='1') a++;
        else if(input[i]== '2') b++;
        else if(input[i]== '3') c++;
    }

    int total = a+b+c,cnt=0;

    for (int i = 0; i < a; i++)
    {
        std::cout<<'1';
        cnt++;
        if(cnt<total) std::cout<<'+';
    }
    for (int i = 0; i < b; i++)
    {
        std::cout<<'2';
        cnt++;
        if(cnt<total) std::cout<<'+';
    }
    for (int i = 0; i < c; i++)
    {
        std::cout<<'3';
        cnt++;
        if(cnt<total) std::cout<<'+';
    }
    
    return 0;
}