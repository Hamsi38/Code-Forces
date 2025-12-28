#include <iostream>

int main(){

    int a;
    std::cin>>a;

    if(a/100 == a%10) std::cout<<"DA";
    else std::cout<<"NU";

    return 0;
}