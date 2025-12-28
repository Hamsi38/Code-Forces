#include <iostream>
#include <string>

int main(){

    int n,anton=0,danik=0;
    std::cin>>n;

    std::string str;
    std::cin>>str;

    for(char c:str){
        if(c == 'A') anton++;
        else danik++;
    }

    if( anton > danik) std::cout<<"Anton";
    else if(danik > anton) std::cout<<"Danik";
    else std::cout<<"Friendship";

    return 0;
}